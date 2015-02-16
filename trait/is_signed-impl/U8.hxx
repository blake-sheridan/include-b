#ifndef b_trait_is_signed_impl_U8_hxx_
#define b_trait_is_signed_impl_U8_hxx_

#include "b/U8.hxx"
#include "b/trait/is_signed.hxx"

template <>
static constexpr
bool
b::trait::is_signed<U8> = false;

#endif
