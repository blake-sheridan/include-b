#ifndef b_trait_is_unsigned_impl_S8_hxx_
#define b_trait_is_unsigned_impl_S8_hxx_

#include "b/S8.hxx"
#include "b/trait/is_unsigned.hxx"

template <>
static constexpr
bool
b::trait::is_unsigned<S8> = false;

#endif
