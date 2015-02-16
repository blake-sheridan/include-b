#ifndef b_trait_is_signed_impl_U32_hxx_
#define b_trait_is_signed_impl_U32_hxx_

#include "b/U32.hxx"
#include "b/trait/is_signed.hxx"

template <>
static constexpr
bool
b::trait::is_signed<U32> = false;

#endif
