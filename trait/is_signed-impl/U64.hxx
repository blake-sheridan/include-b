#ifndef b_trait_is_signed_impl_U64_hxx_
#define b_trait_is_signed_impl_U64_hxx_

#include "b/U64.hxx"
#include "b/trait/is_signed.hxx"

template <>
static constexpr
bool
b::trait::is_signed<U64> = false;

#endif
