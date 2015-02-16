#ifndef b_trait_is_unsigned_impl_S32_hxx_
#define b_trait_is_unsigned_impl_S32_hxx_

#include "b/S32.hxx"
#include "b/trait/is_unsigned.hxx"

template <>
static constexpr
bool
b::trait::is_unsigned<S32> = false;

#endif
