#ifndef b_trait_is_signed_impl_S8_hxx_
#define b_trait_is_signed_impl_S8_hxx_

#include "b/S8.hxx"
#include "b/trait/is_signed.hxx"

template <>
static constexpr
bool
b::trait::is_signed<S8> = true;

#endif
