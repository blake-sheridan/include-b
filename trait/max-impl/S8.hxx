#ifndef b_trait_max_impl_S8_hxx_
#define b_trait_max_impl_S8_hxx_

#include "builtin/__INT8_MAX__.h"
#include "b/S8.hxx"
#include "b/trait/max.hxx"

template <>
static constexpr
S8
b::trait::max<S8> = __INT8_MAX__;

#endif
