#ifndef b_integer_is_unsigned_impl_U8_hxx_
#define b_integer_is_unsigned_impl_U8_hxx_

#include "b/U8.hxx"
#include "b/integer/is_unsigned.hxx"

template <>
static constexpr
bool
b::integer::is_unsigned<U8> = true;

#endif
