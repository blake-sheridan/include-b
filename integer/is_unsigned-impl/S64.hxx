#ifndef b_integer_is_unsigned_impl_S64_hxx_
#define b_integer_is_unsigned_impl_S64_hxx_

#include "b/S64.hxx"
#include "b/integer/is_unsigned.hxx"

template <>
static constexpr
bool
b::integer::is_unsigned<S64> = false;

#endif
