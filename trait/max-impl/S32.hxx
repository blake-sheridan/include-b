#ifndef b_trait_max_impl_S32_hxx_
#define b_trait_max_impl_S32_hxx_

#include "builtin/__INT32_MAX__.h"
#include "b/S32.hxx"
#include "b/trait/max.hxx"

template <>
static constexpr
S32
b::trait::max<S32> = __INT32_MAX__;

#endif
