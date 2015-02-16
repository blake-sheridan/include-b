#ifndef b_trait_is_signed_impl_U16_hxx_
#define b_trait_is_signed_impl_U16_hxx_

#include "b/U16.hxx"
#include "b/trait/is_signed.hxx"

template <>
static constexpr
bool
b::trait::is_signed<U16> = false;

#endif
