#ifndef b_integer_is_unsigned_impl_U32_hxx_
#define b_integer_is_unsigned_impl_U32_hxx_

#include "b/U32.hxx"
#include "b/integer/is_unsigned.hxx"

template <>
static constexpr
bool
b::integer::is_unsigned<U32> = true;

#endif
