#ifndef b_integer_is_unsigned_impl_S16_hxx_
#define b_integer_is_unsigned_impl_S16_hxx_

#include "b/S16.hxx"
#include "b/integer/is_unsigned.hxx"

template <>
static constexpr
bool
b::integer::is_unsigned<S16> = false;

#endif
