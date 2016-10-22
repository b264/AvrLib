
#pragma once

#include "HAL/Register8.hpp"
#include "HAL/Register16.hpp"

namespace HAL {
namespace Atmel {
namespace Registers {

static constexpr Register8<0x23,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> PINB = {};
static constexpr decltype(PINB)::Bit0 PINB0 = {};
static constexpr decltype(PINB)::Bit1 PINB1 = {};
static constexpr decltype(PINB)::Bit2 PINB2 = {};
static constexpr decltype(PINB)::Bit3 PINB3 = {};
static constexpr decltype(PINB)::Bit4 PINB4 = {};
static constexpr decltype(PINB)::Bit5 PINB5 = {};
static constexpr decltype(PINB)::Bit6 PINB6 = {};
static constexpr decltype(PINB)::Bit7 PINB7 = {};

static constexpr Register8<0x24,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> DDRB = {};
static constexpr decltype(DDRB)::Bit0 DDB0 = {};
static constexpr decltype(DDRB)::Bit1 DDB1 = {};
static constexpr decltype(DDRB)::Bit2 DDB2 = {};
static constexpr decltype(DDRB)::Bit3 DDB3 = {};
static constexpr decltype(DDRB)::Bit4 DDB4 = {};
static constexpr decltype(DDRB)::Bit5 DDB5 = {};
static constexpr decltype(DDRB)::Bit6 DDB6 = {};
static constexpr decltype(DDRB)::Bit7 DDB7 = {};

static constexpr Register8<0x25,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> PORTB = {};
static constexpr decltype(PORTB)::Bit0 PORTB0 = {};
static constexpr decltype(PORTB)::Bit1 PORTB1 = {};
static constexpr decltype(PORTB)::Bit2 PORTB2 = {};
static constexpr decltype(PORTB)::Bit3 PORTB3 = {};
static constexpr decltype(PORTB)::Bit4 PORTB4 = {};
static constexpr decltype(PORTB)::Bit5 PORTB5 = {};
static constexpr decltype(PORTB)::Bit6 PORTB6 = {};
static constexpr decltype(PORTB)::Bit7 PORTB7 = {};

static constexpr Register8<0x26,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit> PINC = {};
static constexpr decltype(PINC)::Bit0 PINC0 = {};
static constexpr decltype(PINC)::Bit1 PINC1 = {};
static constexpr decltype(PINC)::Bit2 PINC2 = {};
static constexpr decltype(PINC)::Bit3 PINC3 = {};
static constexpr decltype(PINC)::Bit4 PINC4 = {};
static constexpr decltype(PINC)::Bit5 PINC5 = {};
static constexpr decltype(PINC)::Bit6 PINC6 = {};

static constexpr Register8<0x27,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit> DDRC = {};
static constexpr decltype(DDRC)::Bit0 DDC0 = {};
static constexpr decltype(DDRC)::Bit1 DDC1 = {};
static constexpr decltype(DDRC)::Bit2 DDC2 = {};
static constexpr decltype(DDRC)::Bit3 DDC3 = {};
static constexpr decltype(DDRC)::Bit4 DDC4 = {};
static constexpr decltype(DDRC)::Bit5 DDC5 = {};
static constexpr decltype(DDRC)::Bit6 DDC6 = {};

static constexpr Register8<0x28,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit> PORTC = {};
static constexpr decltype(PORTC)::Bit0 PORTC0 = {};
static constexpr decltype(PORTC)::Bit1 PORTC1 = {};
static constexpr decltype(PORTC)::Bit2 PORTC2 = {};
static constexpr decltype(PORTC)::Bit3 PORTC3 = {};
static constexpr decltype(PORTC)::Bit4 PORTC4 = {};
static constexpr decltype(PORTC)::Bit5 PORTC5 = {};
static constexpr decltype(PORTC)::Bit6 PORTC6 = {};

static constexpr Register8<0x29,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> PIND = {};
static constexpr decltype(PIND)::Bit0 PIND0 = {};
static constexpr decltype(PIND)::Bit1 PIND1 = {};
static constexpr decltype(PIND)::Bit2 PIND2 = {};
static constexpr decltype(PIND)::Bit3 PIND3 = {};
static constexpr decltype(PIND)::Bit4 PIND4 = {};
static constexpr decltype(PIND)::Bit5 PIND5 = {};
static constexpr decltype(PIND)::Bit6 PIND6 = {};
static constexpr decltype(PIND)::Bit7 PIND7 = {};

static constexpr Register8<0x2a,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> DDRD = {};
static constexpr decltype(DDRD)::Bit0 DDD0 = {};
static constexpr decltype(DDRD)::Bit1 DDD1 = {};
static constexpr decltype(DDRD)::Bit2 DDD2 = {};
static constexpr decltype(DDRD)::Bit3 DDD3 = {};
static constexpr decltype(DDRD)::Bit4 DDD4 = {};
static constexpr decltype(DDRD)::Bit5 DDD5 = {};
static constexpr decltype(DDRD)::Bit6 DDD6 = {};
static constexpr decltype(DDRD)::Bit7 DDD7 = {};

static constexpr Register8<0x2b,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> PORTD = {};
static constexpr decltype(PORTD)::Bit0 PORTD0 = {};
static constexpr decltype(PORTD)::Bit1 PORTD1 = {};
static constexpr decltype(PORTD)::Bit2 PORTD2 = {};
static constexpr decltype(PORTD)::Bit3 PORTD3 = {};
static constexpr decltype(PORTD)::Bit4 PORTD4 = {};
static constexpr decltype(PORTD)::Bit5 PORTD5 = {};
static constexpr decltype(PORTD)::Bit6 PORTD6 = {};
static constexpr decltype(PORTD)::Bit7 PORTD7 = {};

static constexpr Register8<0x35,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> TIFR0 = {};
static constexpr decltype(TIFR0)::Bit0 TOV0 = {};
static constexpr decltype(TIFR0)::Bit1 OCF0A = {};
static constexpr decltype(TIFR0)::Bit2 OCF0B = {};

static constexpr Register8<0x36,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit> TIFR1 = {};
static constexpr decltype(TIFR1)::Bit0 TOV1 = {};
static constexpr decltype(TIFR1)::Bit1 OCF1A = {};
static constexpr decltype(TIFR1)::Bit2 OCF1B = {};
static constexpr decltype(TIFR1)::Bit5 ICF1 = {};

static constexpr Register8<0x37,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> TIFR2 = {};
static constexpr decltype(TIFR2)::Bit0 TOV2 = {};
static constexpr decltype(TIFR2)::Bit1 OCF2A = {};
static constexpr decltype(TIFR2)::Bit2 OCF2B = {};

static constexpr Register8<0x3b,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> PCIFR = {};
static constexpr decltype(PCIFR)::Bit0 PCIF0 = {};
static constexpr decltype(PCIFR)::Bit1 PCIF1 = {};
static constexpr decltype(PCIFR)::Bit2 PCIF2 = {};

static constexpr Register8<0x3c,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> EIFR = {};
static constexpr decltype(EIFR)::Bit0 INTF0 = {};
static constexpr decltype(EIFR)::Bit1 INTF1 = {};

static constexpr Register8<0x3d,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> EIMSK = {};
static constexpr decltype(EIMSK)::Bit0 INT0 = {};
static constexpr decltype(EIMSK)::Bit1 INT1 = {};

static constexpr Register8<0x3e,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> GPIOR0 = {};
static constexpr decltype(GPIOR0)::Bit0 GPIOR00 = {};
static constexpr decltype(GPIOR0)::Bit1 GPIOR01 = {};
static constexpr decltype(GPIOR0)::Bit2 GPIOR02 = {};
static constexpr decltype(GPIOR0)::Bit3 GPIOR03 = {};
static constexpr decltype(GPIOR0)::Bit4 GPIOR04 = {};
static constexpr decltype(GPIOR0)::Bit5 GPIOR05 = {};
static constexpr decltype(GPIOR0)::Bit6 GPIOR06 = {};
static constexpr decltype(GPIOR0)::Bit7 GPIOR07 = {};

static constexpr Register8<0x3f,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit> EECR = {};
static constexpr decltype(EECR)::Bit0 EERE = {};
static constexpr decltype(EECR)::Bit1 EEPE = {};
static constexpr decltype(EECR)::Bit2 EEMPE = {};
static constexpr decltype(EECR)::Bit3 EERIE = {};
static constexpr decltype(EECR)::Bit4 EEPM0 = {};
static constexpr decltype(EECR)::Bit5 EEPM1 = {};

static constexpr Register8<0x40,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> EEDR = {};
static constexpr decltype(EEDR)::Bit0 EEDR0 = {};
static constexpr decltype(EEDR)::Bit1 EEDR1 = {};
static constexpr decltype(EEDR)::Bit2 EEDR2 = {};
static constexpr decltype(EEDR)::Bit3 EEDR3 = {};
static constexpr decltype(EEDR)::Bit4 EEDR4 = {};
static constexpr decltype(EEDR)::Bit5 EEDR5 = {};
static constexpr decltype(EEDR)::Bit6 EEDR6 = {};
static constexpr decltype(EEDR)::Bit7 EEDR7 = {};

static constexpr Register8<0x41,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> EEARL = {};
static constexpr decltype(EEARL)::Bit0 EEAR0 = {};
static constexpr decltype(EEARL)::Bit1 EEAR1 = {};
static constexpr decltype(EEARL)::Bit2 EEAR2 = {};
static constexpr decltype(EEARL)::Bit3 EEAR3 = {};
static constexpr decltype(EEARL)::Bit4 EEAR4 = {};
static constexpr decltype(EEARL)::Bit5 EEAR5 = {};
static constexpr decltype(EEARL)::Bit6 EEAR6 = {};
static constexpr decltype(EEARL)::Bit7 EEAR7 = {};

static constexpr Register8<0x42,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> EEARH = {};
static constexpr decltype(EEARH)::Bit0 EEAR8 = {};
static constexpr decltype(EEARH)::Bit1 EEAR9 = {};

static constexpr Register8<0x43,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReadWriteBit> GTCCR = {};
static constexpr decltype(GTCCR)::Bit0 PSRSYNC = {};
static constexpr decltype(GTCCR)::Bit1 PSRASY = {};
static constexpr decltype(GTCCR)::Bit7 TSM = {};

static constexpr Register8<0x44,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> TCCR0A = {};
static constexpr decltype(TCCR0A)::Bit0 WGM00 = {};
static constexpr decltype(TCCR0A)::Bit1 WGM01 = {};
static constexpr decltype(TCCR0A)::Bit4 COM0B0 = {};
static constexpr decltype(TCCR0A)::Bit5 COM0B1 = {};
static constexpr decltype(TCCR0A)::Bit6 COM0A0 = {};
static constexpr decltype(TCCR0A)::Bit7 COM0A1 = {};

static constexpr Register8<0x45,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReadWriteBit,
                      ReadWriteBit> TCCR0B = {};
static constexpr decltype(TCCR0B)::Bit0 CS00 = {};
static constexpr decltype(TCCR0B)::Bit1 CS01 = {};
static constexpr decltype(TCCR0B)::Bit2 CS02 = {};
static constexpr decltype(TCCR0B)::Bit3 WGM02 = {};
static constexpr decltype(TCCR0B)::Bit6 FOC0B = {};
static constexpr decltype(TCCR0B)::Bit7 FOC0A = {};

static constexpr Register8<0x46,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> TCNT0 = {};

static constexpr Register8<0x47,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> OCR0A = {};

static constexpr Register8<0x48,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> OCR0B = {};

static constexpr Register8<0x4a,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> GPIOR1 = {};
static constexpr decltype(GPIOR1)::Bit0 GPIOR10 = {};
static constexpr decltype(GPIOR1)::Bit1 GPIOR11 = {};
static constexpr decltype(GPIOR1)::Bit2 GPIOR12 = {};
static constexpr decltype(GPIOR1)::Bit3 GPIOR13 = {};
static constexpr decltype(GPIOR1)::Bit4 GPIOR14 = {};
static constexpr decltype(GPIOR1)::Bit5 GPIOR15 = {};
static constexpr decltype(GPIOR1)::Bit6 GPIOR16 = {};
static constexpr decltype(GPIOR1)::Bit7 GPIOR17 = {};

static constexpr Register8<0x4b,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> GPIOR2 = {};
static constexpr decltype(GPIOR2)::Bit0 GPIOR20 = {};
static constexpr decltype(GPIOR2)::Bit1 GPIOR21 = {};
static constexpr decltype(GPIOR2)::Bit2 GPIOR22 = {};
static constexpr decltype(GPIOR2)::Bit3 GPIOR23 = {};
static constexpr decltype(GPIOR2)::Bit4 GPIOR24 = {};
static constexpr decltype(GPIOR2)::Bit5 GPIOR25 = {};
static constexpr decltype(GPIOR2)::Bit6 GPIOR26 = {};
static constexpr decltype(GPIOR2)::Bit7 GPIOR27 = {};

static constexpr Register8<0x4c,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> SPCR = {};
static constexpr decltype(SPCR)::Bit0 SPR0 = {};
static constexpr decltype(SPCR)::Bit1 SPR1 = {};
static constexpr decltype(SPCR)::Bit2 CPHA = {};
static constexpr decltype(SPCR)::Bit3 CPOL = {};
static constexpr decltype(SPCR)::Bit4 MSTR = {};
static constexpr decltype(SPCR)::Bit5 DORD = {};
static constexpr decltype(SPCR)::Bit6 SPE = {};
static constexpr decltype(SPCR)::Bit7 SPIE = {};

static constexpr Register8<0x4d,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReadWriteBit,
                      ReadWriteBit> SPSR = {};
static constexpr decltype(SPSR)::Bit0 SPI2X = {};
static constexpr decltype(SPSR)::Bit6 WCOL = {};
static constexpr decltype(SPSR)::Bit7 SPIF = {};

static constexpr Register8<0x4e,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> SPDR = {};
static constexpr decltype(SPDR)::Bit0 SPDR0 = {};
static constexpr decltype(SPDR)::Bit1 SPDR1 = {};
static constexpr decltype(SPDR)::Bit2 SPDR2 = {};
static constexpr decltype(SPDR)::Bit3 SPDR3 = {};
static constexpr decltype(SPDR)::Bit4 SPDR4 = {};
static constexpr decltype(SPDR)::Bit5 SPDR5 = {};
static constexpr decltype(SPDR)::Bit6 SPDR6 = {};
static constexpr decltype(SPDR)::Bit7 SPDR7 = {};

static constexpr Register8<0x50,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> ACSR = {};
static constexpr decltype(ACSR)::Bit0 ACIS0 = {};
static constexpr decltype(ACSR)::Bit1 ACIS1 = {};
static constexpr decltype(ACSR)::Bit2 ACIC = {};
static constexpr decltype(ACSR)::Bit3 ACIE = {};
static constexpr decltype(ACSR)::Bit4 ACI = {};
static constexpr decltype(ACSR)::Bit5 ACO = {};
static constexpr decltype(ACSR)::Bit6 ACBG = {};
static constexpr decltype(ACSR)::Bit7 ACD = {};

static constexpr Register8<0x53,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> SMCR = {};
static constexpr decltype(SMCR)::Bit0 SE = {};
static constexpr decltype(SMCR)::Bit1 SM0 = {};
static constexpr decltype(SMCR)::Bit2 SM1 = {};
static constexpr decltype(SMCR)::Bit3 SM2 = {};

static constexpr Register8<0x54,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> MCUSR = {};
static constexpr decltype(MCUSR)::Bit0 PORF = {};
static constexpr decltype(MCUSR)::Bit1 EXTRF = {};
static constexpr decltype(MCUSR)::Bit2 BORF = {};
static constexpr decltype(MCUSR)::Bit3 WDRF = {};

static constexpr Register8<0x55,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit> MCUCR = {};
static constexpr decltype(MCUCR)::Bit0 IVCE = {};
static constexpr decltype(MCUCR)::Bit1 IVSEL = {};
static constexpr decltype(MCUCR)::Bit4 PUD = {};
static constexpr decltype(MCUCR)::Bit5 BODSE = {};
static constexpr decltype(MCUCR)::Bit6 BODS = {};

static constexpr Register8<0x57,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> SPMCSR = {};
static constexpr decltype(SPMCSR)::Bit0 SELFPRGEN = {};
static constexpr decltype(SPMCSR)::Bit0 SPMEN = {};
static constexpr decltype(SPMCSR)::Bit1 PGERS = {};
static constexpr decltype(SPMCSR)::Bit2 PGWRT = {};
static constexpr decltype(SPMCSR)::Bit3 BLBSET = {};
static constexpr decltype(SPMCSR)::Bit4 RWWSRE = {};
static constexpr decltype(SPMCSR)::Bit5 SIGRD = {};
static constexpr decltype(SPMCSR)::Bit6 RWWSB = {};
static constexpr decltype(SPMCSR)::Bit7 SPMIE = {};

static constexpr Register8<0x60,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> WDTCSR = {};
static constexpr decltype(WDTCSR)::Bit0 WDP0 = {};
static constexpr decltype(WDTCSR)::Bit1 WDP1 = {};
static constexpr decltype(WDTCSR)::Bit2 WDP2 = {};
static constexpr decltype(WDTCSR)::Bit3 WDE = {};
static constexpr decltype(WDTCSR)::Bit4 WDCE = {};
static constexpr decltype(WDTCSR)::Bit5 WDP3 = {};
static constexpr decltype(WDTCSR)::Bit6 WDIE = {};
static constexpr decltype(WDTCSR)::Bit7 WDIF = {};

static constexpr Register8<0x61,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReadWriteBit> CLKPR = {};
static constexpr decltype(CLKPR)::Bit0 CLKPS0 = {};
static constexpr decltype(CLKPR)::Bit1 CLKPS1 = {};
static constexpr decltype(CLKPR)::Bit2 CLKPS2 = {};
static constexpr decltype(CLKPR)::Bit3 CLKPS3 = {};
static constexpr decltype(CLKPR)::Bit7 CLKPCE = {};

static constexpr Register8<0x64,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> PRR = {};
static constexpr decltype(PRR)::Bit0 PRADC = {};
static constexpr decltype(PRR)::Bit1 PRUSART0 = {};
static constexpr decltype(PRR)::Bit2 PRSPI = {};
static constexpr decltype(PRR)::Bit3 PRTIM1 = {};
static constexpr decltype(PRR)::Bit5 PRTIM0 = {};
static constexpr decltype(PRR)::Bit6 PRTIM2 = {};
static constexpr decltype(PRR)::Bit7 PRTWI = {};

static constexpr Register8<0x66,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> OSCCAL = {};
static constexpr decltype(OSCCAL)::Bit0 CAL0 = {};
static constexpr decltype(OSCCAL)::Bit1 CAL1 = {};
static constexpr decltype(OSCCAL)::Bit2 CAL2 = {};
static constexpr decltype(OSCCAL)::Bit3 CAL3 = {};
static constexpr decltype(OSCCAL)::Bit4 CAL4 = {};
static constexpr decltype(OSCCAL)::Bit5 CAL5 = {};
static constexpr decltype(OSCCAL)::Bit6 CAL6 = {};
static constexpr decltype(OSCCAL)::Bit7 CAL7 = {};

static constexpr Register8<0x68,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> PCICR = {};
static constexpr decltype(PCICR)::Bit0 PCIE0 = {};
static constexpr decltype(PCICR)::Bit1 PCIE1 = {};
static constexpr decltype(PCICR)::Bit2 PCIE2 = {};

static constexpr Register8<0x69,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> EICRA = {};
static constexpr decltype(EICRA)::Bit0 ISC00 = {};
static constexpr decltype(EICRA)::Bit1 ISC01 = {};
static constexpr decltype(EICRA)::Bit2 ISC10 = {};
static constexpr decltype(EICRA)::Bit3 ISC11 = {};

static constexpr Register8<0x6b,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> PCMSK0 = {};
static constexpr decltype(PCMSK0)::Bit0 PCINT0 = {};
static constexpr decltype(PCMSK0)::Bit1 PCINT1 = {};
static constexpr decltype(PCMSK0)::Bit2 PCINT2 = {};
static constexpr decltype(PCMSK0)::Bit3 PCINT3 = {};
static constexpr decltype(PCMSK0)::Bit4 PCINT4 = {};
static constexpr decltype(PCMSK0)::Bit5 PCINT5 = {};
static constexpr decltype(PCMSK0)::Bit6 PCINT6 = {};
static constexpr decltype(PCMSK0)::Bit7 PCINT7 = {};

static constexpr Register8<0x6c,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit> PCMSK1 = {};
static constexpr decltype(PCMSK1)::Bit0 PCINT8 = {};
static constexpr decltype(PCMSK1)::Bit1 PCINT9 = {};
static constexpr decltype(PCMSK1)::Bit2 PCINT10 = {};
static constexpr decltype(PCMSK1)::Bit3 PCINT11 = {};
static constexpr decltype(PCMSK1)::Bit4 PCINT12 = {};
static constexpr decltype(PCMSK1)::Bit5 PCINT13 = {};
static constexpr decltype(PCMSK1)::Bit6 PCINT14 = {};

static constexpr Register8<0x6d,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> PCMSK2 = {};
static constexpr decltype(PCMSK2)::Bit0 PCINT16 = {};
static constexpr decltype(PCMSK2)::Bit1 PCINT17 = {};
static constexpr decltype(PCMSK2)::Bit2 PCINT18 = {};
static constexpr decltype(PCMSK2)::Bit3 PCINT19 = {};
static constexpr decltype(PCMSK2)::Bit4 PCINT20 = {};
static constexpr decltype(PCMSK2)::Bit5 PCINT21 = {};
static constexpr decltype(PCMSK2)::Bit6 PCINT22 = {};
static constexpr decltype(PCMSK2)::Bit7 PCINT23 = {};

static constexpr Register8<0x6e,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> TIMSK0 = {};
static constexpr decltype(TIMSK0)::Bit0 TOIE0 = {};
static constexpr decltype(TIMSK0)::Bit1 OCIE0A = {};
static constexpr decltype(TIMSK0)::Bit2 OCIE0B = {};

static constexpr Register8<0x6f,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit> TIMSK1 = {};
static constexpr decltype(TIMSK1)::Bit0 TOIE1 = {};
static constexpr decltype(TIMSK1)::Bit1 OCIE1A = {};
static constexpr decltype(TIMSK1)::Bit2 OCIE1B = {};
static constexpr decltype(TIMSK1)::Bit5 ICIE1 = {};

static constexpr Register8<0x70,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> TIMSK2 = {};
static constexpr decltype(TIMSK2)::Bit0 TOIE2 = {};
static constexpr decltype(TIMSK2)::Bit1 OCIE2A = {};
static constexpr decltype(TIMSK2)::Bit2 OCIE2B = {};

static constexpr Register16<0x78> ADC;

static constexpr Register16<0x78> ADCW;

static constexpr Register8<0x78,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> ADCL = {};
static constexpr decltype(ADCL)::Bit0 ADCL0 = {};
static constexpr decltype(ADCL)::Bit1 ADCL1 = {};
static constexpr decltype(ADCL)::Bit2 ADCL2 = {};
static constexpr decltype(ADCL)::Bit3 ADCL3 = {};
static constexpr decltype(ADCL)::Bit4 ADCL4 = {};
static constexpr decltype(ADCL)::Bit5 ADCL5 = {};
static constexpr decltype(ADCL)::Bit6 ADCL6 = {};
static constexpr decltype(ADCL)::Bit7 ADCL7 = {};

static constexpr Register8<0x79,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> ADCH = {};
static constexpr decltype(ADCH)::Bit0 ADCH0 = {};
static constexpr decltype(ADCH)::Bit1 ADCH1 = {};
static constexpr decltype(ADCH)::Bit2 ADCH2 = {};
static constexpr decltype(ADCH)::Bit3 ADCH3 = {};
static constexpr decltype(ADCH)::Bit4 ADCH4 = {};
static constexpr decltype(ADCH)::Bit5 ADCH5 = {};
static constexpr decltype(ADCH)::Bit6 ADCH6 = {};
static constexpr decltype(ADCH)::Bit7 ADCH7 = {};

static constexpr Register8<0x7a,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> ADCSRA = {};
static constexpr decltype(ADCSRA)::Bit0 ADPS0 = {};
static constexpr decltype(ADCSRA)::Bit1 ADPS1 = {};
static constexpr decltype(ADCSRA)::Bit2 ADPS2 = {};
static constexpr decltype(ADCSRA)::Bit3 ADIE = {};
static constexpr decltype(ADCSRA)::Bit4 ADIF = {};
static constexpr decltype(ADCSRA)::Bit5 ADATE = {};
static constexpr decltype(ADCSRA)::Bit6 ADSC = {};
static constexpr decltype(ADCSRA)::Bit7 ADEN = {};

static constexpr Register8<0x7b,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReadWriteBit,
                      ReservedBit> ADCSRB = {};
static constexpr decltype(ADCSRB)::Bit0 ADTS0 = {};
static constexpr decltype(ADCSRB)::Bit1 ADTS1 = {};
static constexpr decltype(ADCSRB)::Bit2 ADTS2 = {};
static constexpr decltype(ADCSRB)::Bit6 ACME = {};

static constexpr Register8<0x7c,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> ADMUX = {};
static constexpr decltype(ADMUX)::Bit0 MUX0 = {};
static constexpr decltype(ADMUX)::Bit1 MUX1 = {};
static constexpr decltype(ADMUX)::Bit2 MUX2 = {};
static constexpr decltype(ADMUX)::Bit3 MUX3 = {};
static constexpr decltype(ADMUX)::Bit5 ADLAR = {};
static constexpr decltype(ADMUX)::Bit6 REFS0 = {};
static constexpr decltype(ADMUX)::Bit7 REFS1 = {};

static constexpr Register8<0x7e,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit> DIDR0 = {};
static constexpr decltype(DIDR0)::Bit0 ADC0D = {};
static constexpr decltype(DIDR0)::Bit1 ADC1D = {};
static constexpr decltype(DIDR0)::Bit2 ADC2D = {};
static constexpr decltype(DIDR0)::Bit3 ADC3D = {};
static constexpr decltype(DIDR0)::Bit4 ADC4D = {};
static constexpr decltype(DIDR0)::Bit5 ADC5D = {};

static constexpr Register8<0x7f,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> DIDR1 = {};
static constexpr decltype(DIDR1)::Bit0 AIN0D = {};
static constexpr decltype(DIDR1)::Bit1 AIN1D = {};

static constexpr Register8<0x80,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> TCCR1A = {};
static constexpr decltype(TCCR1A)::Bit0 WGM10 = {};
static constexpr decltype(TCCR1A)::Bit1 WGM11 = {};
static constexpr decltype(TCCR1A)::Bit4 COM1B0 = {};
static constexpr decltype(TCCR1A)::Bit5 COM1B1 = {};
static constexpr decltype(TCCR1A)::Bit6 COM1A0 = {};
static constexpr decltype(TCCR1A)::Bit7 COM1A1 = {};

static constexpr Register8<0x81,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReadWriteBit,
                      ReadWriteBit> TCCR1B = {};
static constexpr decltype(TCCR1B)::Bit0 CS10 = {};
static constexpr decltype(TCCR1B)::Bit1 CS11 = {};
static constexpr decltype(TCCR1B)::Bit2 CS12 = {};
static constexpr decltype(TCCR1B)::Bit3 WGM12 = {};
static constexpr decltype(TCCR1B)::Bit4 WGM13 = {};
static constexpr decltype(TCCR1B)::Bit6 ICES1 = {};
static constexpr decltype(TCCR1B)::Bit7 ICNC1 = {};

static constexpr Register8<0x82,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReadWriteBit,
                      ReadWriteBit> TCCR1C = {};
static constexpr decltype(TCCR1C)::Bit6 FOC1B = {};
static constexpr decltype(TCCR1C)::Bit7 FOC1A = {};

static constexpr Register16<0x84> TCNT1;

static constexpr Register8<0x84,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> TCNT1L = {};
static constexpr decltype(TCNT1L)::Bit0 TCNT1L0 = {};
static constexpr decltype(TCNT1L)::Bit1 TCNT1L1 = {};
static constexpr decltype(TCNT1L)::Bit2 TCNT1L2 = {};
static constexpr decltype(TCNT1L)::Bit3 TCNT1L3 = {};
static constexpr decltype(TCNT1L)::Bit4 TCNT1L4 = {};
static constexpr decltype(TCNT1L)::Bit5 TCNT1L5 = {};
static constexpr decltype(TCNT1L)::Bit6 TCNT1L6 = {};
static constexpr decltype(TCNT1L)::Bit7 TCNT1L7 = {};

static constexpr Register8<0x85,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> TCNT1H = {};
static constexpr decltype(TCNT1H)::Bit0 TCNT1H0 = {};
static constexpr decltype(TCNT1H)::Bit1 TCNT1H1 = {};
static constexpr decltype(TCNT1H)::Bit2 TCNT1H2 = {};
static constexpr decltype(TCNT1H)::Bit3 TCNT1H3 = {};
static constexpr decltype(TCNT1H)::Bit4 TCNT1H4 = {};
static constexpr decltype(TCNT1H)::Bit5 TCNT1H5 = {};
static constexpr decltype(TCNT1H)::Bit6 TCNT1H6 = {};
static constexpr decltype(TCNT1H)::Bit7 TCNT1H7 = {};

static constexpr Register16<0x86> ICR1;

static constexpr Register8<0x86,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> ICR1L = {};
static constexpr decltype(ICR1L)::Bit0 ICR1L0 = {};
static constexpr decltype(ICR1L)::Bit1 ICR1L1 = {};
static constexpr decltype(ICR1L)::Bit2 ICR1L2 = {};
static constexpr decltype(ICR1L)::Bit3 ICR1L3 = {};
static constexpr decltype(ICR1L)::Bit4 ICR1L4 = {};
static constexpr decltype(ICR1L)::Bit5 ICR1L5 = {};
static constexpr decltype(ICR1L)::Bit6 ICR1L6 = {};
static constexpr decltype(ICR1L)::Bit7 ICR1L7 = {};

static constexpr Register8<0x87,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> ICR1H = {};
static constexpr decltype(ICR1H)::Bit0 ICR1H0 = {};
static constexpr decltype(ICR1H)::Bit1 ICR1H1 = {};
static constexpr decltype(ICR1H)::Bit2 ICR1H2 = {};
static constexpr decltype(ICR1H)::Bit3 ICR1H3 = {};
static constexpr decltype(ICR1H)::Bit4 ICR1H4 = {};
static constexpr decltype(ICR1H)::Bit5 ICR1H5 = {};
static constexpr decltype(ICR1H)::Bit6 ICR1H6 = {};
static constexpr decltype(ICR1H)::Bit7 ICR1H7 = {};

static constexpr Register16<0x88> OCR1A;

static constexpr Register8<0x88,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> OCR1AL = {};
static constexpr decltype(OCR1AL)::Bit0 OCR1AL0 = {};
static constexpr decltype(OCR1AL)::Bit1 OCR1AL1 = {};
static constexpr decltype(OCR1AL)::Bit2 OCR1AL2 = {};
static constexpr decltype(OCR1AL)::Bit3 OCR1AL3 = {};
static constexpr decltype(OCR1AL)::Bit4 OCR1AL4 = {};
static constexpr decltype(OCR1AL)::Bit5 OCR1AL5 = {};
static constexpr decltype(OCR1AL)::Bit6 OCR1AL6 = {};
static constexpr decltype(OCR1AL)::Bit7 OCR1AL7 = {};

static constexpr Register8<0x89,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> OCR1AH = {};
static constexpr decltype(OCR1AH)::Bit0 OCR1AH0 = {};
static constexpr decltype(OCR1AH)::Bit1 OCR1AH1 = {};
static constexpr decltype(OCR1AH)::Bit2 OCR1AH2 = {};
static constexpr decltype(OCR1AH)::Bit3 OCR1AH3 = {};
static constexpr decltype(OCR1AH)::Bit4 OCR1AH4 = {};
static constexpr decltype(OCR1AH)::Bit5 OCR1AH5 = {};
static constexpr decltype(OCR1AH)::Bit6 OCR1AH6 = {};
static constexpr decltype(OCR1AH)::Bit7 OCR1AH7 = {};

static constexpr Register16<0x8a> OCR1B;

static constexpr Register8<0x8a,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> OCR1BL = {};
static constexpr decltype(OCR1BL)::Bit0 OCR1BL0 = {};
static constexpr decltype(OCR1BL)::Bit1 OCR1BL1 = {};
static constexpr decltype(OCR1BL)::Bit2 OCR1BL2 = {};
static constexpr decltype(OCR1BL)::Bit3 OCR1BL3 = {};
static constexpr decltype(OCR1BL)::Bit4 OCR1BL4 = {};
static constexpr decltype(OCR1BL)::Bit5 OCR1BL5 = {};
static constexpr decltype(OCR1BL)::Bit6 OCR1BL6 = {};
static constexpr decltype(OCR1BL)::Bit7 OCR1BL7 = {};

static constexpr Register8<0x8b,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> OCR1BH = {};
static constexpr decltype(OCR1BH)::Bit0 OCR1BH0 = {};
static constexpr decltype(OCR1BH)::Bit1 OCR1BH1 = {};
static constexpr decltype(OCR1BH)::Bit2 OCR1BH2 = {};
static constexpr decltype(OCR1BH)::Bit3 OCR1BH3 = {};
static constexpr decltype(OCR1BH)::Bit4 OCR1BH4 = {};
static constexpr decltype(OCR1BH)::Bit5 OCR1BH5 = {};
static constexpr decltype(OCR1BH)::Bit6 OCR1BH6 = {};
static constexpr decltype(OCR1BH)::Bit7 OCR1BH7 = {};

static constexpr Register8<0xb0,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> TCCR2A = {};
static constexpr decltype(TCCR2A)::Bit0 WGM20 = {};
static constexpr decltype(TCCR2A)::Bit1 WGM21 = {};
static constexpr decltype(TCCR2A)::Bit4 COM2B0 = {};
static constexpr decltype(TCCR2A)::Bit5 COM2B1 = {};
static constexpr decltype(TCCR2A)::Bit6 COM2A0 = {};
static constexpr decltype(TCCR2A)::Bit7 COM2A1 = {};

static constexpr Register8<0xb1,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReservedBit,
                      ReadWriteBit,
                      ReadWriteBit> TCCR2B = {};
static constexpr decltype(TCCR2B)::Bit0 CS20 = {};
static constexpr decltype(TCCR2B)::Bit1 CS21 = {};
static constexpr decltype(TCCR2B)::Bit2 CS22 = {};
static constexpr decltype(TCCR2B)::Bit3 WGM22 = {};
static constexpr decltype(TCCR2B)::Bit6 FOC2B = {};
static constexpr decltype(TCCR2B)::Bit7 FOC2A = {};

static constexpr Register8<0xb2,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> TCNT2 = {};

static constexpr Register8<0xb3,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> OCR2A = {};

static constexpr Register8<0xb4,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> OCR2B = {};

static constexpr Register8<0xb6,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit> ASSR = {};
static constexpr decltype(ASSR)::Bit0 TCR2BUB = {};
static constexpr decltype(ASSR)::Bit1 TCR2AUB = {};
static constexpr decltype(ASSR)::Bit2 OCR2BUB = {};
static constexpr decltype(ASSR)::Bit3 OCR2AUB = {};
static constexpr decltype(ASSR)::Bit4 TCN2UB = {};
static constexpr decltype(ASSR)::Bit5 AS2 = {};
static constexpr decltype(ASSR)::Bit6 EXCLK = {};

static constexpr Register8<0xb8,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> TWBR = {};
static constexpr decltype(TWBR)::Bit0 TWBR0 = {};
static constexpr decltype(TWBR)::Bit1 TWBR1 = {};
static constexpr decltype(TWBR)::Bit2 TWBR2 = {};
static constexpr decltype(TWBR)::Bit3 TWBR3 = {};
static constexpr decltype(TWBR)::Bit4 TWBR4 = {};
static constexpr decltype(TWBR)::Bit5 TWBR5 = {};
static constexpr decltype(TWBR)::Bit6 TWBR6 = {};
static constexpr decltype(TWBR)::Bit7 TWBR7 = {};

static constexpr Register8<0xb9,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> TWSR = {};
static constexpr decltype(TWSR)::Bit0 TWPS0 = {};
static constexpr decltype(TWSR)::Bit1 TWPS1 = {};
static constexpr decltype(TWSR)::Bit3 TWS3 = {};
static constexpr decltype(TWSR)::Bit4 TWS4 = {};
static constexpr decltype(TWSR)::Bit5 TWS5 = {};
static constexpr decltype(TWSR)::Bit6 TWS6 = {};
static constexpr decltype(TWSR)::Bit7 TWS7 = {};

static constexpr Register8<0xba,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> TWAR = {};
static constexpr decltype(TWAR)::Bit0 TWGCE = {};
static constexpr decltype(TWAR)::Bit1 TWA0 = {};
static constexpr decltype(TWAR)::Bit2 TWA1 = {};
static constexpr decltype(TWAR)::Bit3 TWA2 = {};
static constexpr decltype(TWAR)::Bit4 TWA3 = {};
static constexpr decltype(TWAR)::Bit5 TWA4 = {};
static constexpr decltype(TWAR)::Bit6 TWA5 = {};
static constexpr decltype(TWAR)::Bit7 TWA6 = {};

static constexpr Register8<0xbb,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> TWDR = {};
static constexpr decltype(TWDR)::Bit0 TWD0 = {};
static constexpr decltype(TWDR)::Bit1 TWD1 = {};
static constexpr decltype(TWDR)::Bit2 TWD2 = {};
static constexpr decltype(TWDR)::Bit3 TWD3 = {};
static constexpr decltype(TWDR)::Bit4 TWD4 = {};
static constexpr decltype(TWDR)::Bit5 TWD5 = {};
static constexpr decltype(TWDR)::Bit6 TWD6 = {};
static constexpr decltype(TWDR)::Bit7 TWD7 = {};

static constexpr Register8<0xbc,
                      ReadWriteBit,
                      ReservedBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> TWCR = {};
static constexpr decltype(TWCR)::Bit0 TWIE = {};
static constexpr decltype(TWCR)::Bit2 TWEN = {};
static constexpr decltype(TWCR)::Bit3 TWWC = {};
static constexpr decltype(TWCR)::Bit4 TWSTO = {};
static constexpr decltype(TWCR)::Bit5 TWSTA = {};
static constexpr decltype(TWCR)::Bit6 TWEA = {};
static constexpr decltype(TWCR)::Bit7 TWINT = {};

static constexpr Register8<0xbd,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReservedBit> TWAMR = {};
static constexpr decltype(TWAMR)::Bit0 TWAM0 = {};
static constexpr decltype(TWAMR)::Bit1 TWAM1 = {};
static constexpr decltype(TWAMR)::Bit2 TWAM2 = {};
static constexpr decltype(TWAMR)::Bit3 TWAM3 = {};
static constexpr decltype(TWAMR)::Bit4 TWAM4 = {};
static constexpr decltype(TWAMR)::Bit5 TWAM5 = {};
static constexpr decltype(TWAMR)::Bit6 TWAM6 = {};

static constexpr Register8<0xc0,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> UCSR0A = {};
static constexpr decltype(UCSR0A)::Bit0 MPCM0 = {};
static constexpr decltype(UCSR0A)::Bit1 U2X0 = {};
static constexpr decltype(UCSR0A)::Bit2 UPE0 = {};
static constexpr decltype(UCSR0A)::Bit3 DOR0 = {};
static constexpr decltype(UCSR0A)::Bit4 FE0 = {};
static constexpr decltype(UCSR0A)::Bit5 UDRE0 = {};
static constexpr decltype(UCSR0A)::Bit6 TXC0 = {};
static constexpr decltype(UCSR0A)::Bit7 RXC0 = {};

static constexpr Register8<0xc1,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> UCSR0B = {};
static constexpr decltype(UCSR0B)::Bit0 TXB80 = {};
static constexpr decltype(UCSR0B)::Bit1 RXB80 = {};
static constexpr decltype(UCSR0B)::Bit2 UCSZ02 = {};
static constexpr decltype(UCSR0B)::Bit3 TXEN0 = {};
static constexpr decltype(UCSR0B)::Bit4 RXEN0 = {};
static constexpr decltype(UCSR0B)::Bit5 UDRIE0 = {};
static constexpr decltype(UCSR0B)::Bit6 TXCIE0 = {};
static constexpr decltype(UCSR0B)::Bit7 RXCIE0 = {};

static constexpr Register8<0xc2,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit,
                      ReadWriteBit> UCSR0C = {};
static constexpr decltype(UCSR0C)::Bit0 UCPOL0 = {};
static constexpr decltype(UCSR0C)::Bit1 UCSZ00 = {};
static constexpr decltype(UCSR0C)::Bit1 UCPHA0 = {};
static constexpr decltype(UCSR0C)::Bit2 UCSZ01 = {};
static constexpr decltype(UCSR0C)::Bit2 UDORD0 = {};
static constexpr decltype(UCSR0C)::Bit3 USBS0 = {};
static constexpr decltype(UCSR0C)::Bit4 UPM00 = {};
static constexpr decltype(UCSR0C)::Bit5 UPM01 = {};
static constexpr decltype(UCSR0C)::Bit6 UMSEL00 = {};
static constexpr decltype(UCSR0C)::Bit7 UMSEL01 = {};

static constexpr Register16<0xc4> UBRR0;

static constexpr Register8<0xc4,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> UBRR0L = {};

static constexpr Register8<0xc5,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> UBRR0H = {};

static constexpr Register8<0xc6,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit,
                      ReservedBit> UDR0 = {};


} // namespace Registers
} // namespace Atmel
} // namespace HAL

