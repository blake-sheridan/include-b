#ifndef b_integer_is_unsigned_hxx_
#define b_integer_is_unsigned_hxx_

#include "b/unavailable!.hxx"

namespace b {
namespace integer {

template <typename T>
b_unavailable("requires implementation")
static constexpr
bool
is_unsigned = false; // Unreachable

} // namespace integer
} // namespace b

#endif
