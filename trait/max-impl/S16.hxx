#ifndef b_trait_max_impl_S16_hxx_
#define b_trait_max_impl_S16_hxx_

#include "builtin/__INT16_MAX__.h"
#include "b/S16.hxx"
#include "b/trait/max.hxx"

template <>
static constexpr
S16
b::trait::max<S16> = __INT16_MAX__;

#endif
