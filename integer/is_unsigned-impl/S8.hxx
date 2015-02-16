#ifndef b_integer_is_unsigned_impl_S8_hxx_
#define b_integer_is_unsigned_impl_S8_hxx_

#include "b/S8.hxx"
#include "b/integer/is_unsigned.hxx"

template <>
static constexpr
bool
b::integer::is_unsigned<S8> = false;

#endif
