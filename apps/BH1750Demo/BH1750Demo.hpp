#ifndef BH1750DEMO_BH1750DEMO_HPP_
#define BH1750DEMO_BH1750DEMO_HPP_

#include "HAL/Atmel/Device.hpp"
#include "HAL/Atmel/Power.hpp"
#include "Time/RealTimer.hpp"
#include "Time/Units.hpp"
#include "ROHM/BH1750.hpp"

namespace BH1750Demo {

using namespace HAL::Atmel;
using namespace Time;
using namespace Streams;
using namespace ROHM;

#define auto_field(name, expr) decltype(expr) name = expr

struct Main {
    typedef Main This;
    typedef Logging::Log<Loggers::Main> log;

    Usart0 usart0 = { 57600 };
    auto_field(pinTX, PinPD1<250>(usart0));

    auto_field(timer0, Timer0::withPrescaler<1024>::inNormalMode());
    auto_field(timer2, Timer2::withPrescaler<8>::inNormalMode());
    auto_field(rt, realTimer(timer0));

    auto_field(startMeasure, deadline(rt, 2_s));
    //auto_field(readResult, deadline(rt, 240_ms));
    TWI<> twi = {};
    auto_field(bh, bh1750(twi, rt));
    auto_field(pin, JeeNodePort1D());

    typedef Delegate<This, decltype(pinTX), &This::pinTX,
            Delegate<This, decltype(rt), &This::rt,
            Delegate<This, decltype(twi), &This::twi>>> Handlers;

    void main() {
        pin.configureAsOutputHigh();
    	log::debug(F("BH1750Demo"));
        pinTX.flush();
/*
    	while (true) {
    		rt.delay(400_ms);
        	log::debug(dec(twi.ints), 'i', '0' + ((SREG & SREG_I) > 0));
            pinTX.flush();
        	twi.write(uint8_t(42), uint8_t(80));
            rt.delay(400_ms);
    	};

*/
        bool measuring;
        //readResult.cancel();
        while (true) {
            if (startMeasure.isNow()) {
            	measuring = true;
            	log::debug(F("Measuring"));
                bh.measure(BH1750Mode::oneTimeHighRes);
                //readResult.schedule();
                // TODO embed into BH1750 when the result can be read
            } else if (measuring && !bh.isMeasuring()) {
            	measuring = false;
            	auto level = bh.getLightLevel();
            	log::debug(F("Level: "), dec(level));
                startMeasure.schedule();
            }
        }
    }
};

}

#endif /* BH1750DEMO_BH1750DEMO_HPP_ */
