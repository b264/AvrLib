#ifndef PIR_HCSR501_HPP_
#define PIR_HCSR501_HPP_

#include "Logging.hpp"
#include "AtomicScope.hpp"
#include "Time/RealTimer.hpp"
#include "HAL/Atmel/InterruptHandlers.hpp"
#include "Tasks/TaskState.hpp"

namespace PIR {

using namespace Time;

enum class HCSR501State { OFF, INITIALIZING, READY, DETECTED, SLEEPING };

namespace Impl {

using namespace HAL::Atmel;
using namespace HAL::Atmel::InterruptHandlers;

/**
 * Provides a nice interface to the HC-SR501 Passive Infrared (PIR) sensor module,
 * which can be readily found on the customary market places.
 *
 *      /--------+------------+----+-------------+--+---+-\
 *      |        | Time delay |    | Sensitivity |  | o | |   [X] ==> Single trigger   [ ]
 *      |        \------------/    \-------------/  | o | |   [X]                      [X]
 *      |                                           | o | |   [ ] <-- +3.3V            [X] ==> Repeat trigger
 *      |                     HC-SR501              \---/ |
 *      |                  (component side)               |
 *      |                                                 |
 *      |                                                 |
 *      |                /--------------------\           |
 *      |  C1            | VCC  | DATA | GND  |      C2   |
 *      \----------------+------+------+------+-----------/
 *
 * Instead of relying on its built-in delay mechanism, we can power the module through a microcontroller pin,
 * in order to save power during the sleep time after having detected movement.
 *
 * NOTE: This does NOT work reliably on all modules. Some trigger immediately after waiting for even 30 seconds.
 * This may be a software bug in this library, or a hardware bug in the module.
 *
 * By default, the module is somewhat power-inefficient. It expects 5V on VCC and drops this through a diode and
 * a linear regulator to 3.3V. In order to power it from 3.3V directly, you can conveniently put +3.3V on the
 * unused pin of the trigger jumper, which should be set to "Single trigger" (factory default).
 *
 * DATA is expected to turn high for about 1 second to indicate an event.
 *
 * @param datapin_t  Pin that DATA is connected to (must have interrupt or pin change interrupt capability)
 * @param powerpin_t Pin that VCC is connected to
 * @param delay      Time to turn off after having detected motion (to conserve battery)
 */
template <typename datapin_t, typename powerpin_t, typename rt_t, typename delay>
class HCSR501 {
	typedef Logging::Log<Loggers::PIR> log;
    typedef HCSR501<datapin_t, powerpin_t, rt_t, delay> This;
    typedef HCSR501State State;

    datapin_t *const pin;
    powerpin_t *const power;
    VariableDeadline<rt_t> timeout;
    volatile State state = State::OFF;
    volatile uint8_t ints = 0;

    void initializing() {
        if (timeout.isNow()) {
        	log::debug(F("Ready"));
        	AtomicScope _;
            state = State::READY;
            pin->interruptOnRising();
        }
    }

    void onPinRising() {
    	ints++;

        if (state == State::READY) {
            state = State::DETECTED;
            pin->interruptOff();
            power->setLow();
        }
    }

    void turnPowerOn() {
    	log::debug(F("Turning on"));
        power->setHigh();
		pin->interruptOff();
        state = State::INITIALIZING;
        timeout.schedule(5_s);
    }

    void turnPowerOff() {
    	if (state != State::OFF) {
    		log::debug(F("Turning off"));
    		timeout.cancel();
    		pin->interruptOff();
    		power->setLow();
    		state = State::OFF;
    	}

    }

    void sleeping() {
    	AtomicScope _;
        if (timeout.isNow()) {
            turnPowerOn();
        }
    }

public:
    typedef On<This, typename datapin_t::INT, &This::onPinRising> Handlers;

    HCSR501(datapin_t &_pin, powerpin_t &_power, rt_t &_rt):
        pin(&_pin),
        power(&_power),
        timeout(_rt) {
        power->configureAsOutputLow();
        pin->configureAsInputWithoutPullup(); // the 10K pullup will consume 100uA of current, since the module is idle low.
        pin->interruptOff();
        turnPowerOn();
    }

    HCSR501State getState() const {
        return state;
    }

    auto timeLeft() const {
    	return timeout.timeLeft();
    }

    void loop() {
        switch (state) {
        case State::OFF: break;
        case State::INITIALIZING: initializing(); break;
        case State::READY: break; // no looping here, we process by interrupt
        case State::DETECTED: break; // no looping here, we await isMotionDetected() to change state
        case State::SLEEPING: sleeping(); break;
        }
    }

    bool isMotionDetected() {
        AtomicScope _;

        if (state == State::DETECTED) {
        	log::debug(F("Motion!"));
        	state = State::SLEEPING;
            timeout.template schedule<delay>();
            return true;
        } else {
        	return false;
        }
    }

    uint8_t getInts() const {
    	return ints;
    }

    void disable() {
    	turnPowerOff();
    }

    void enable() {
    	AtomicScope _;

    	if (state == State::OFF) {
    		turnPowerOn();
    	}
    }

    auto getTaskState() {
		return TaskState(timeout, SleepMode::POWER_DOWN);
    }
};

} // namespace Impl

/**
 * Declares a HCSR501 with the given sleep delay
 */
template <typename datapin_t, typename powerpin_t, typename rt_t, typename delay_t>
Impl::HCSR501<datapin_t, powerpin_t, rt_t, delay_t> HCSR501(datapin_t &data, powerpin_t &power, rt_t &rt, delay_t delay) {
    return { data, power, rt };
}

/**
 * Declares a HCSR501 with a 5-minute sleep delay
 */
template <typename datapin_t, typename powerpin_t, typename rt_t>
Impl::HCSR501<datapin_t, powerpin_t, rt_t, decltype(5_min)> HCSR501(datapin_t &data, powerpin_t &power, rt_t &rt) {
    return { data, power, rt };
}


} // namespace PIR



#endif /* PIR_HCSR501_HPP_ */
