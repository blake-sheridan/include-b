#ifndef b_integer_min_impl_S64_hxx_
#define b_integer_min_impl_S64_hxx_

#include "builtin/__INT64_MAX__.h"
#include "b/S64.hxx"
#include "b/integer/min.hxx"

template <>
static constexpr
S64
b::integer::min<S64> = -9223372036854775807L - 1;

#endif
