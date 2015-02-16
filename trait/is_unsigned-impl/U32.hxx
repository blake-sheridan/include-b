#ifndef b_trait_is_unsigned_impl_U32_hxx_
#define b_trait_is_unsigned_impl_U32_hxx_

#include "b/U32.hxx"
#include "b/trait/is_unsigned.hxx"

template <>
static constexpr
bool
b::trait::is_unsigned<U32> = true;

#endif
