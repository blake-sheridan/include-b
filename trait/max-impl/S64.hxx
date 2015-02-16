#ifndef b_trait_max_impl_S64_hxx_
#define b_trait_max_impl_S64_hxx_

#include "builtin/__INT64_MAX__.h"
#include "b/S64.hxx"
#include "b/trait/max.hxx"

template <>
static constexpr
S64
b::trait::max<S64> = __INT64_MAX__;

#endif
