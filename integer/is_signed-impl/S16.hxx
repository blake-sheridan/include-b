#ifndef b_integer_is_signed_impl_S16_hxx_
#define b_integer_is_signed_impl_S16_hxx_

#include "b/S16.hxx"
#include "b/integer/is_signed.hxx"

template <>
static constexpr
bool
b::integer::is_signed<S16> = true;

#endif
