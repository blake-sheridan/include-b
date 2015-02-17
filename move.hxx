#ifndef b_move_hxx_
#define b_move_hxx_

#include "b/reference/Remove.hxx"

namespace b {

/*
 * An implementation of `std::move`.
 */
template <typename X>
static constexpr
reference::Remove<X>&&
move(X&& x) noexcept
{
    return static_cast<reference::Remove<X>&&>(x);
}

} // namespace b

#endif
