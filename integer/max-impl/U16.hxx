#ifndef b_integer_max_impl_U16_hxx_
#define b_integer_max_impl_U16_hxx_

#include "builtin/__UINT16_MAX__.h"
#include "b/U16.hxx"
#include "b/integer/max.hxx"

template <>
static constexpr
U16
b::integer::max<U16> = __UINT16_MAX__;

#endif
