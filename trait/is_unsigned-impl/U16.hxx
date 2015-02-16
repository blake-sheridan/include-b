#ifndef b_trait_is_unsigned_impl_U16_hxx_
#define b_trait_is_unsigned_impl_U16_hxx_

#include "b/U16.hxx"
#include "b/trait/is_unsigned.hxx"

template <>
static constexpr
bool
b::trait::is_unsigned<U16> = true;

#endif
