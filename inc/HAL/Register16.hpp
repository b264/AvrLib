#pragma once

#include <stdint.h>
#include "attributes.hpp"

namespace HAL {

template <uintptr_t _addr>
class Register16 {
	using Ptr = MemoryMappedReference<uint16_t, _addr>;
public:
	constexpr Register16() {}
	static constexpr uintptr_t addr = _addr;

	INLINE uint16_t operator= (const uint16_t v) const { Ptr::write(v); return v; }

	INLINE operator uint16_t() const { return Ptr::read(); }
};

}


