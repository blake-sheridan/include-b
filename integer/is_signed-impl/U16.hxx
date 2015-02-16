#ifndef b_integer_is_signed_impl_U16_hxx_
#define b_integer_is_signed_impl_U16_hxx_

#include "b/U16.hxx"
#include "b/integer/is_signed.hxx"

template <>
static constexpr
bool
b::integer::is_signed<U16> = false;

#endif
