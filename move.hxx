#ifndef b_move_hxx_
#define b_move_hxx_

#include "b/RemoveReference.hxx"

namespace b {

/*
 * An implementation of `std::move`.
 */
template <typename X>
static constexpr
RemoveReference<X>&&
move(X&& x) noexcept
{
    return static_cast<RemoveReference<X>&&>(x);
}

} // namespace b

#endif
