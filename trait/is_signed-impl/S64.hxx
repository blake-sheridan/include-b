#ifndef b_trait_is_signed_impl_S64_hxx_
#define b_trait_is_signed_impl_S64_hxx_

#include "b/S64.hxx"
#include "b/trait/is_signed.hxx"

template <>
static constexpr
bool
b::trait::is_signed<S64> = true;

#endif
