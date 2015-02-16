#ifndef b_trait_is_signed_hxx_
#define b_trait_is_signed_hxx_

#include "b/unavailable!.hxx"

namespace b {
namespace trait {

template <typename T>
b_unavailable("requires implementation")
static constexpr
bool
is_signed = false; // Unreachable

} // namespace trait
} // namespace b

#endif
