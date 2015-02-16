#ifndef b_trait_is_unsigned_hxx_
#define b_trait_is_unsigned_hxx_

#include "b/unavailable!.hxx"

namespace b {
namespace trait {

template <typename T>
b_unavailable("requires implementation")
static constexpr
bool
is_unsigned = false; // Unreachable

} // namespace trait
} // namespace b

#endif
