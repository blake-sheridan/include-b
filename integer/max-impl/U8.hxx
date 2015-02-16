#ifndef b_integer_max_impl_U8_hxx_
#define b_integer_max_impl_U8_hxx_

#include "builtin/__UINT8_MAX__.h"
#include "b/U8.hxx"
#include "b/integer/max.hxx"

template <>
static constexpr
U8
b::integer::max<U8> = __UINT8_MAX__;

#endif
