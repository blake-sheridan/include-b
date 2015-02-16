#ifndef b_type_is_hxx_
#define b_type_is_hxx_

namespace b {
namespace type {

/*
 * Variable template which is true iff `X` is `Y`.
 */
template <typename X, typename Y>
static constexpr
bool
is = false;

template <typename X>
static constexpr
bool
is<X, X> = true;

} // namespace type
} // namespace b

#endif
