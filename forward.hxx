#ifndef b_forward_hxx_
#define b_forward_hxx_

#include "b/reference/Remove.hxx"

namespace b {

/*
 * An implementation of `std::forward`.
 */
template <typename X>
static constexpr
X&&
forward(reference::Remove<X>& x) noexcept
{
    return static_cast<X&&>(x);
}

template <typename X>
static constexpr
X&&
forward(reference::Remove<X>&& x) noexcept
{
    return static_cast<X&&>(x);
}

} // namespace b

#endif
