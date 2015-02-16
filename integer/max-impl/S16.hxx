#ifndef b_integer_max_impl_S16_hxx_
#define b_integer_max_impl_S16_hxx_

#include "builtin/__INT16_MAX__.h"
#include "b/S16.hxx"
#include "b/integer/max.hxx"

template <>
static constexpr
S16
b::integer::max<S16> = __INT16_MAX__;

#endif
