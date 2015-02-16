#ifndef b_integer_is_signed_impl_U8_hxx_
#define b_integer_is_signed_impl_U8_hxx_

#include "b/U8.hxx"
#include "b/integer/is_signed.hxx"

template <>
static constexpr
bool
b::integer::is_signed<U8> = false;

#endif
