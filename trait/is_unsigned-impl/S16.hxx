#ifndef b_trait_is_unsigned_impl_S16_hxx_
#define b_trait_is_unsigned_impl_S16_hxx_

#include "b/S16.hxx"
#include "b/trait/is_unsigned.hxx"

template <>
static constexpr
bool
b::trait::is_unsigned<S16> = false;

#endif
