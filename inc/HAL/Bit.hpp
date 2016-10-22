#pragma once

#include "gcc_type_traits.h"
#include "MemoryMappedPointer.hpp"
#include "attributes.hpp"

namespace HAL {

template<typename Reg, typename l, typename r>
struct Or;
template<typename Reg, typename l, typename r>
struct And;
template<typename Reg, typename t>
struct Not;

template<typename _Reg, typename This>
struct Ops {
	using Reg = _Reg;

	template <typename r, typename check = typename std::enable_if<std::is_same<typename r::Reg, Reg>::value>::type>
	Or<_Reg, This, r> constexpr operator| (r expr) const { return {}; };

	template <typename r, typename check = typename std::enable_if<std::is_same<typename r::Reg, Reg>::value>::type>
	And<_Reg, This, r> constexpr operator& (r expr) const { return {}; };

	Not<_Reg, This> constexpr operator~() const { return {}; }

	/**
	 * Sets the bits in the expression, and clears the inverted bits in the expression.
	 * e.g. (CS00 | ~CS01 | CS02).apply() will set CS00 and CS02, clear CS01, and leave other bits alone.
	 */
	void apply() {
		Reg::apply(~This::applyMask, This::bitMask);
	}
};

template<typename _Reg, typename This>
INLINE void operator |= (uint8_t &i, const Ops<_Reg,This> bits) {
    i |= This::bitMask;
}

template<typename _Reg, typename This>
INLINE void operator &= (uint8_t &i, const Ops<_Reg,This> bits) {
    i &= This::bitMask;
}

template<typename Reg, typename t>
struct Not: public Ops<Reg, Not<Reg, t>> {
	static constexpr uint8_t bitMask =  ~t::bitMask;
	static constexpr uint8_t applyMask = t::applyMask;
};

template<typename Reg, typename l, typename r>
struct Or: public Ops<Reg, Or<Reg, l,r>> {
	static constexpr uint8_t bitMask =  l::bitMask | (r::bitMask & r::applyMask);
	static constexpr uint8_t applyMask =  l::applyMask | r::applyMask;
};

template<typename Reg, typename l, typename r>
struct And: public Ops<Reg, And<Reg, l,r>> {
	static constexpr uint8_t bitMask =  l::bitMask & r::bitMask;
	static constexpr uint8_t applyMask =  l::applyMask | r::applyMask;
};

/**
 * @param _mmptr_t MemoryMappedReference instantiation
 */
template<typename _mmptr_t, uint8_t _idx>
struct ReservedBit: public Ops<_mmptr_t, ReservedBit<_mmptr_t, _idx>>
{
	using Reg = _mmptr_t;
	static constexpr uint8_t idx = _idx;

	static constexpr uint8_t bitMask = 1 << idx;
	static constexpr uint8_t applyMask = bitMask;
	static constexpr uint8_t bitAndMask = static_cast<uint8_t>(~bitMask);

	static_assert(idx >= 0 && idx <= 7, "Index out of range! (0 <= idx <= 7)");
	static_assert(sizeof(typename Reg::Type) == 1, "Only 8-bit registers are supported!");

	constexpr operator uint8_t() const { return bitMask; }
};

template<class Reg, uint8_t idx>
struct ReadOnlyBit : public ReservedBit<Reg, idx>
{
	/// Alias for the base type.
	using Base = ReservedBit<Reg, idx>;

	/// Check if the bit is set.
	static bool INLINE isSet()     { return Reg::read() & Base::bitMask; }
	/// Check if the bit is cleared.
	static bool INLINE isCleared() { return !isSet(); }
	/// Returns 0 or 1 depending on whether the bit is cleared or set.
	static uint8_t INLINE getValue() { return (Reg::read() & Base::bitMask) >> Base::idx; }
};

template<class Reg, uint8_t idx>
struct StatusBitClearBy0 : public ReadOnlyBit<Reg, idx>
{
	/// Alias for the base type.
	using Base = ReadOnlyBit<Reg, idx>;

	static constexpr uint8_t bitAndMask = 0xff;

	/// Clear the bit by writing a 0.
	static void INLINE clear()
	{
		Reg::clear(Base::bitMask);
	}
};

template<class Reg, uint8_t idx>
struct StatusBitClearBy1 : public ReadOnlyBit<Reg, idx>
{
	/// Alias for the base type.
	using Base = ReadOnlyBit<Reg, idx>;

	/// Clear the bit by writing a 1.
	static void INLINE clear()
	{
		Reg::set(Base::bitMask);
	}
};

template<class Reg, uint8_t idx>
struct ReadWriteBit : public StatusBitClearBy0<Reg, idx>
{
	/// Alias for the base type.
	using Base = ReadOnlyBit<Reg, idx>;

	/// Set the bit.
	static void INLINE set()
	{
		Reg::set(Base::bitMask);
	}

	/// Set the bit to [high].
	static void INLINE apply(bool high) {
		if (high) {
			Reg::set(Base::bitMask);
		} else {
			Reg::clear(Base::bitMask);
		}
	}
};

}



