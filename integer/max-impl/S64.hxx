#ifndef b_integer_max_impl_S64_hxx_
#define b_integer_max_impl_S64_hxx_

#include "builtin/__INT64_MAX__.h"
#include "b/S64.hxx"
#include "b/integer/max.hxx"

template <>
static constexpr
S64
b::integer::max<S64> = __INT64_MAX__;

#endif
