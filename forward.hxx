#ifndef b_forward_hxx_
#define b_forward_hxx_

#include "b/RemoveReference.hxx"

namespace b {

template <typename X>
static constexpr
X&&
forward(RemoveReference<X>& x) noexcept
{
    return static_cast<X&&>(x);
}

template <typename X>
static constexpr
X&&
forward(RemoveReference<X>&& x) noexcept
{
    return static_cast<X&&>(x);
}

} // namespace b

#endif
