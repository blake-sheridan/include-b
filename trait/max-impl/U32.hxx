#ifndef b_trait_max_impl_U32_hxx_
#define b_trait_max_impl_U32_hxx_

#include "builtin/__UINT32_MAX__.h"
#include "b/U32.hxx"
#include "b/trait/max.hxx"

template <>
static constexpr
U32
b::trait::max<U32> = __UINT32_MAX__;

#endif
