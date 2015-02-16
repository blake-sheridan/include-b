#ifndef b_integer_is_unsigned_impl_U64_hxx_
#define b_integer_is_unsigned_impl_U64_hxx_

#include "b/U64.hxx"
#include "b/integer/is_unsigned.hxx"

template <>
static constexpr
bool
b::integer::is_unsigned<U64> = true;

#endif
