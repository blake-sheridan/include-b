#ifndef b_trait_is_signed_impl_S32_hxx_
#define b_trait_is_signed_impl_S32_hxx_

#include "b/S32.hxx"
#include "b/trait/is_signed.hxx"

template <>
static constexpr
bool
b::trait::is_signed<S32> = true;

#endif
