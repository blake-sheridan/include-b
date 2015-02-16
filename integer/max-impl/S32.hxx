#ifndef b_integer_max_impl_S32_hxx_
#define b_integer_max_impl_S32_hxx_

#include "builtin/__INT32_MAX__.h"
#include "b/S32.hxx"
#include "b/integer/max.hxx"

template <>
static constexpr
S32
b::integer::max<S32> = __INT32_MAX__;

#endif
