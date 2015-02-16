#ifndef b_integer_is_signed_impl_S64_hxx_
#define b_integer_is_signed_impl_S64_hxx_

#include "b/S64.hxx"
#include "b/integer/is_signed.hxx"

template <>
static constexpr
bool
b::integer::is_signed<S64> = true;

#endif
