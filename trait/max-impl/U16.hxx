#ifndef b_trait_max_impl_U16_hxx_
#define b_trait_max_impl_U16_hxx_

#include "builtin/__UINT16_MAX__.h"
#include "b/U16.hxx"
#include "b/trait/max.hxx"

template <>
static constexpr
U16
b::trait::max<U16> = __UINT16_MAX__;

#endif
