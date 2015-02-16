#ifndef b_trait_is_unsigned_impl_U8_hxx_
#define b_trait_is_unsigned_impl_U8_hxx_

#include "b/U8.hxx"
#include "b/trait/is_unsigned.hxx"

template <>
static constexpr
bool
b::trait::is_unsigned<U8> = true;

#endif
