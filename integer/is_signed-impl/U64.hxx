#ifndef b_integer_is_signed_impl_U64_hxx_
#define b_integer_is_signed_impl_U64_hxx_

#include "b/U64.hxx"
#include "b/integer/is_signed.hxx"

template <>
static constexpr
bool
b::integer::is_signed<U64> = false;

#endif
