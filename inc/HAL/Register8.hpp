#pragma once

#include <stdint.h>
#include "attributes.hpp"
#include "MemoryMappedPointer.hpp"
#include "Bit.hpp"

namespace HAL {

template <typename Reg, uint8_t bit> struct RegisterBit {};
template <typename Reg> struct RegisterBit<Reg, 0> { using type = typename Reg::Bit0; static constexpr type value = {}; };
template <typename Reg> struct RegisterBit<Reg, 1> { using type = typename Reg::Bit1; static constexpr type value = {}; };
template <typename Reg> struct RegisterBit<Reg, 2> { using type = typename Reg::Bit2; static constexpr type value = {}; };
template <typename Reg> struct RegisterBit<Reg, 3> { using type = typename Reg::Bit3; static constexpr type value = {}; };
template <typename Reg> struct RegisterBit<Reg, 4> { using type = typename Reg::Bit4; static constexpr type value = {}; };
template <typename Reg> struct RegisterBit<Reg, 5> { using type = typename Reg::Bit5; static constexpr type value = {}; };
template <typename Reg> struct RegisterBit<Reg, 6> { using type = typename Reg::Bit6; static constexpr type value = {}; };
template <typename Reg> struct RegisterBit<Reg, 7> { using type = typename Reg::Bit7; static constexpr type value = {}; };

template <
  uintptr_t _addr,
  template<typename, uint8_t> class _bit0,
  template<typename, uint8_t> class _bit1,
  template<typename, uint8_t> class _bit2,
  template<typename, uint8_t> class _bit3,
  template<typename, uint8_t> class _bit4,
  template<typename, uint8_t> class _bit5,
  template<typename, uint8_t> class _bit6,
  template<typename, uint8_t> class _bit7
>
class Register8 {
private:
	using This = Register8<_addr, _bit0, _bit1, _bit2, _bit3, _bit4, _bit5, _bit6, _bit7>;
	using Ptr = MemoryMappedReference<uint8_t, _addr>;
public:
	constexpr Register8() {}
	static constexpr uintptr_t addr = _addr;

	template <uint8_t b>
	INLINE static constexpr typename RegisterBit<This, b>::type bit() { return {}; }

	using Bit0 = _bit0<Ptr, 0>;
	using Bit1 = _bit1<Ptr, 1>;
	using Bit2 = _bit2<Ptr, 2>;
	using Bit3 = _bit3<Ptr, 3>;
	using Bit4 = _bit4<Ptr, 4>;
	using Bit5 = _bit5<Ptr, 5>;
	using Bit6 = _bit6<Ptr, 6>;
	using Bit7 = _bit7<Ptr, 7>;

	// TODO remove this and introduce type for "typed copy of register", for registers that should be bit-addressed.
	INLINE uint8_t operator= (const uint8_t v) const { Ptr::write(v); return v; }

	INLINE operator uint8_t() const { return Ptr::read(); }

	template <typename T, typename check = typename std::enable_if<std::is_same<typename T::Reg, Ptr>::value>::type>
	INLINE void operator=(T t) const { Ptr::write(T::bitMask); }

	template <typename T, typename check = typename std::enable_if<std::is_same<typename T::Reg, Ptr>::value>::type>
	INLINE void operator|=(T t) const { Ptr::set(T::bitMask); }

	template <typename T, typename check = typename std::enable_if<std::is_same<typename T::Reg, Ptr>::value>::type>
	INLINE void operator&=(T t) const { Ptr::clearNot(T::bitMask); }

	template <typename T, typename check = typename std::enable_if<std::is_same<typename T::Reg, Ptr>::value>::type>
	INLINE uint8_t operator &(T t) const { return Ptr::read() & T::bitMask; }

	template <typename T, typename check = typename std::enable_if<std::is_same<typename T::Reg, Ptr>::value>::type>
	INLINE void apply(T t) const { t.apply(); }
};

/**
 * No known bit definitions: treat as opaque uint8_t value
 */
template <uintptr_t _addr>
class Register8<_addr, ReservedBit, ReservedBit, ReservedBit, ReservedBit, ReservedBit, ReservedBit, ReservedBit, ReservedBit> {
private:
	using This = Register8<_addr, ReservedBit, ReservedBit, ReservedBit, ReservedBit, ReservedBit, ReservedBit, ReservedBit, ReservedBit>;
	using Ptr = MemoryMappedReference<uint8_t, _addr>;
public:
	constexpr Register8() {}
	static constexpr uintptr_t addr = _addr;

	INLINE uint8_t operator= (const uint8_t v) const { Ptr::write(v); return v; }

	INLINE operator uint8_t() const { return Ptr::read(); }

	INLINE void operator|= (uint8_t t) const { Ptr::set(t); }

	INLINE void operator&= (uint8_t t) const { Ptr::clearNot(t); }

	INLINE uint8_t operator &(uint8_t t) const { return Ptr::read() & t; }

	INLINE uint8_t operator |(uint8_t t) const { return Ptr::read() | t; }
};

}


