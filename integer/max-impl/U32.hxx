#ifndef b_integer_max_impl_U32_hxx_
#define b_integer_max_impl_U32_hxx_

#include "builtin/__UINT32_MAX__.h"
#include "b/U32.hxx"
#include "b/integer/max.hxx"

template <>
static constexpr
U32
b::integer::max<U32> = __UINT32_MAX__;

#endif
