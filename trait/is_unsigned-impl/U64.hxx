#ifndef b_trait_is_unsigned_impl_U64_hxx_
#define b_trait_is_unsigned_impl_U64_hxx_

#include "b/U64.hxx"
#include "b/trait/is_unsigned.hxx"

template <>
static constexpr
bool
b::trait::is_unsigned<U64> = true;

#endif
