#ifndef DHT_DHT_HPP_
#define DHT_DHT_HPP_

#include "Serial/PulseCounter.hpp"
#include "Logging.hpp"
#include "Streams/Protocol.hpp"
#include "Time/RealTimer.hpp"

namespace DHT {

using namespace Serial;
using namespace Time;
using namespace Streams;

enum class DHTState: uint8_t {
    IDLE, BOOTING, SIGNALING, SYNC_LOW, SYNC_HIGH, RECEIVING_LOW, RECEIVING_HIGH
};

namespace Impl {

/** Abstract base class for all DHT-based temperature & humidity sensors */
template <typename pin_t, typename comparator_t, typename rt_t>
class DHT {
    typedef Logging::Log<Loggers::DHT11> log;

    pin_t *pin;
    DHTState state = DHTState::BOOTING;
    PulseCounter<comparator_t, pin_t, 250> counter;
    VariableDeadline<rt_t> timeout;
    uint8_t bit = 7;
    uint8_t pos = 0;
    uint8_t data[4] = { 0, 0, 0, 0 };
    bool seenHigh = false;
    uint8_t lastFailure = 0;
public:
    void measure() {
        if (state == DHTState::IDLE || state == DHTState::BOOTING || state == DHTState::SIGNALING) {
            log::debug(F("Starting measurement"));
            pin->configureAsOutput();
            pin->setLow();
            timeout.reset(18_ms);
            state = DHTState::SIGNALING;
        }
    }
protected:
    void onComparator() {
        decltype(counter)::onComparatorHandler::invoke(&counter);
    }
    void onPin() {
        decltype(counter)::onPinChangedHandler::invoke(&counter);
    }
    uint8_t getData(uint8_t idx) const {
        return data[idx];
    }
private:
    void reset(uint8_t failure) {
        log::debug(F("Resetting, err="), dec(failure));
        lastFailure = failure;
        pin->configureAsInputWithPullup();
        state = DHTState::IDLE;
        bit = 7;
        pos = 0;
        seenHigh = false;
        counter.pause();
    }

    void receive(bool value) {
        if (value) {
            data[pos] |= (1 << bit);
        } else {
            data[pos] &= ~(1 << bit);
        }
        if (bit > 0) {
            bit--;
        } else {
            bit = 7;
            log::debug(F("in "), dec(data[pos]));
            pos++;
        }
        if (pos >= 5) {
            reset(0);
        } else {
            state = DHTState::RECEIVING_LOW;
        }
    }

    void booting() {
        if (timeout.isNow()) {
            measure();
        }
    }

    void signaling() {
        if (timeout.isNow()) {
            log::debug(F("Switching to input"));
            pin->configureAsInputWithPullup();
            counter.resume();
            state = DHTState::SYNC_LOW;
        }
    }

    template <typename f_t>
    void expectPulse(f_t f) {
        counter.on([this, f] (auto pulse) {
            log::debug(dec(uint8_t(state)), ':', as<Pulse::TEXT>(&pulse));
            if (pulse.isEmpty()) {
                this->reset(uint8_t(state));
            } else {
                f(pulse);
            }
        });
    }

    void sync_low() {
        expectPulse([this] (auto pulse) {
            if (pulse.isLow() && pulse > 60_us && pulse < 120_us) {
                state = DHTState::SYNC_HIGH;
            }
        });
    }

    void sync_high() {
        expectPulse([this] (auto pulse) {
            if (pulse.isHigh() && pulse > 60_us && pulse < 120_us) {
                state = DHTState::RECEIVING_LOW;
            }
        });
    }

    void receiving_low() {
        expectPulse([this] (auto pulse) {
            if (pulse.isLow()) {
                if (pulse > 30_us && pulse < 80_us) {
                    state = DHTState::RECEIVING_HIGH;
                } else {
                    this->reset(pulse.getDuration());
                }
            } else {
                this->reset(43);
            }
        });
    }

    void receiving_high() {
        expectPulse([this] (auto pulse) {
            if (pulse.isHigh()) {
                if (pulse < 50_us) {
                    this->receive(0);
                } else {
                    this->receive(1);
                }
            } else {
                this->reset(44);
            }
        });
    }

public:
    DHT(pin_t &_pin, comparator_t &_comparator, rt_t &_rt):
        pin(&_pin),
        counter(_comparator, _pin),
        timeout(deadline(_rt)) {
        log::debug(F("Booting"));
        pin->configureAsInputWithPullup();
        timeout.reset(1_s);
    }

    void loop() {
        switch(state) {
        case DHTState::IDLE: break;
        case DHTState::BOOTING: booting(); break;
        case DHTState::SIGNALING: signaling(); break;
        case DHTState::SYNC_LOW: sync_low(); break;
        case DHTState::SYNC_HIGH: sync_high(); break;
        case DHTState::RECEIVING_LOW: receiving_low(); break;
        case DHTState::RECEIVING_HIGH: receiving_high(); break;
        }
    }

    DHTState getState() const {
        return state;
    }

    bool isIdle() const {
        return state == DHTState::IDLE;
    }

    /** Returns any failure code that occurred during the most recent measurement, or 0 for no failure. */
    uint8_t getLastFailure() const {
        return lastFailure;
    }
};

} // namespace Impl

} // namespace DHT


#endif /* DHT_DHT_HPP_ */
