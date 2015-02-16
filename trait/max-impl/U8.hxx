#ifndef b_trait_max_impl_U8_hxx_
#define b_trait_max_impl_U8_hxx_

#include "builtin/__UINT8_MAX__.h"
#include "b/U8.hxx"
#include "b/trait/max.hxx"

template <>
static constexpr
U8
b::trait::max<U8> = __UINT8_MAX__;

#endif
