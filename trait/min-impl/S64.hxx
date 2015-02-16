#ifndef b_trait_min_impl_S64_hxx_
#define b_trait_min_impl_S64_hxx_

#include "builtin/__INT64_MAX__.h"
#include "b/S64.hxx"
#include "b/trait/min.hxx"

template <>
static constexpr
S64
b::trait::min<S64> = -9223372036854775807L - 1;

#endif
