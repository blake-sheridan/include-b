#ifndef b_trait_max_impl_U64_hxx_
#define b_trait_max_impl_U64_hxx_

#include "builtin/__UINT64_MAX__.h"
#include "b/U64.hxx"
#include "b/trait/max.hxx"

template <>
static constexpr
U64
b::trait::max<U64> = __UINT64_MAX__;

#endif
