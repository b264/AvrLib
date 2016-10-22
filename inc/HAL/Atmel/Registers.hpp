#pragma once

#if defined (__AVR_ATmega328P__) || defined (__AVR_ATmega328__)
#  include "registers/ATMega328p_io.hpp"
#else
#  error Unsupported chip
#endif

namespace HAL {
namespace Atmel {
namespace Registers {

static constexpr Register8<0x3F + 0x20,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> SREG;
static constexpr decltype(SREG)::Bit0 SREG_C;
static constexpr decltype(SREG)::Bit1 SREG_Z;
static constexpr decltype(SREG)::Bit2 SREG_N;
static constexpr decltype(SREG)::Bit3 SREG_V;
static constexpr decltype(SREG)::Bit4 SREG_S;
static constexpr decltype(SREG)::Bit5 SREG_H;
static constexpr decltype(SREG)::Bit6 SREG_T;
static constexpr decltype(SREG)::Bit7 SREG_I;

}
}
}

