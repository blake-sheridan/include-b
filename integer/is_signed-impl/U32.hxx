#ifndef b_integer_is_signed_impl_U32_hxx_
#define b_integer_is_signed_impl_U32_hxx_

#include "b/U32.hxx"
#include "b/integer/is_signed.hxx"

template <>
static constexpr
bool
b::integer::is_signed<U32> = false;

#endif
