#pragma once

#include "attributes.hpp"
#include <stdint.h>

namespace HAL {

template<typename T, uintptr_t _addr>
class MemoryMappedReference
{
private:
	using PtrType = volatile T*;
	static constexpr PtrType ptr = reinterpret_cast<PtrType>(_addr);
public:
	/// The type used for read and write operations.
	using Type = T;
	/// iomm address this pointer point to
	static constexpr uintptr_t addr = _addr;
	/// Read value from addr.
	static INLINE T read()     { return *ptr; }
	/// Write value to addr before write andMask and orMask are applied.
	static INLINE void write(T v) { *ptr = v; }

	static INLINE void clear(T bitmask) { *ptr &= ~bitmask; }

	static INLINE void clearNot(T bitmask) { *ptr &= bitmask; }

	static INLINE void set(T bitmask) { *ptr |= bitmask; }

	static INLINE void apply(T clearMask, T setMask) { *ptr = (*ptr & clearMask) | setMask; }

	// TODO sanity check
	//static_assert(addr >= AvrConstants::iommBase &&
	//              addr + (sizeof(T) - 1) <= AvrConstants::iommTop,
	//              "IOMMPtr points to region outside of I/O memory!");
};



}
