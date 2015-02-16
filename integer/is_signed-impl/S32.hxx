#ifndef b_integer_is_signed_impl_S32_hxx_
#define b_integer_is_signed_impl_S32_hxx_

#include "b/S32.hxx"
#include "b/integer/is_signed.hxx"

template <>
static constexpr
bool
b::integer::is_signed<S32> = true;

#endif
