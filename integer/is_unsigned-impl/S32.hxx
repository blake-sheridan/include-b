#ifndef b_integer_is_unsigned_impl_S32_hxx_
#define b_integer_is_unsigned_impl_S32_hxx_

#include "b/S32.hxx"
#include "b/integer/is_unsigned.hxx"

template <>
static constexpr
bool
b::integer::is_unsigned<S32> = false;

#endif
