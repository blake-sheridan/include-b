#ifndef b_integer_max_impl_S8_hxx_
#define b_integer_max_impl_S8_hxx_

#include "builtin/__INT8_MAX__.h"
#include "b/S8.hxx"
#include "b/integer/max.hxx"

template <>
static constexpr
S8
b::integer::max<S8> = __INT8_MAX__;

#endif
