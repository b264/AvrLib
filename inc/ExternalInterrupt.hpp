/*
 * ExternalInterrupt.hpp
 *
 *  Created on: Jan 16, 2015
 *      Author: jan
 */

#ifndef EXTERNALINTERRUPT_HPP_
#define EXTERNALINTERRUPT_HPP_

#include "Interrupt.hpp"

ISR(INT0_vect);
ISR(INT1_vect);

class ExtInterruptHandler: public InterruptHandler {
    friend void INT0_vect();
    friend void INT1_vect();
public:

};

extern ExtInterruptHandler extInt0;
extern ExtInterruptHandler extInt1;

template <typename info, ExtInterruptHandler &_interrupt>
class ExtInterrupt {
public:
    InterruptHandler &interruptOnExternal() {
        return _interrupt;
    }

    /**
     * Disables raising any interrupts for this pin (but does not remove any registered interrupt handler).
     */
    void interruptOnExternalOff() {
        info::off();
    }

    /**
     * Invokes an attached interrupt handler whenever the pin is low. Works in all sleep modes.
     * You should call externalInterruptOff() from your handler, otherwise it will be
     * repeatedly invoked.
     */
    void interruptOnExternalLow() {
        info::on(0);
    }

    /**
     * Invokes an attached interrupt handler whenever the pin changes value. Only works when
     * the I/O clock is running.
     */
    void interruptOnExternalChange() {
        info::on(1);
    }

    /**
     * Invokes an attached interrupt handler whenever the pin goes from low to high. Only works when
     * the I/O clock is running.
     */
    void interruptOnExternalRising() {
        info::on(2);
    }

    /**
     * Invokes an attached interrupt handler whenever the pin goes from high to low. Only works when
     * the I/O clock is running.
     */
    void interruptOnExternalFalling() {
        info::on(3);
    }
};

struct Int0Info {
    inline static void on(uint8_t mode) {
        EICRA = (EICRA & ~(_BV(ISC00) | _BV(ISC01))) | (mode << ISC00);
        EIMSK |= _BV(INT0);
    }
    inline static void off() {
        EIMSK &= ~_BV(INT0);
    }
};

struct Int1Info {
    inline static void on(uint8_t mode) {
        EICRA = (EICRA & ~(_BV(ISC10) | _BV(ISC11))) | (mode << ISC10);
        EIMSK |= _BV(INT1);
    }
    inline static void off() {
        EIMSK &= ~_BV(INT1);
    }
};

#endif /* EXTERNALINTERRUPT_HPP_ */