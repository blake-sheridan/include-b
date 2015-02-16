#ifndef b_integer_is_signed_impl_S8_hxx_
#define b_integer_is_signed_impl_S8_hxx_

#include "b/S8.hxx"
#include "b/integer/is_signed.hxx"

template <>
static constexpr
bool
b::integer::is_signed<S8> = true;

#endif
