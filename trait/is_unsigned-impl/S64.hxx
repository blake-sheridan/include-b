#ifndef b_trait_is_unsigned_impl_S64_hxx_
#define b_trait_is_unsigned_impl_S64_hxx_

#include "b/S64.hxx"
#include "b/trait/is_unsigned.hxx"

template <>
static constexpr
bool
b::trait::is_unsigned<S64> = false;

#endif
