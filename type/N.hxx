#ifndef b_type_N_hxx_
#define b_type_N_hxx_

namespace b {
namespace type {

template <Unsigned, typename...>
struct __N;

/*
 * The type at position `n` of variadic `Types`.
 */
template <Unsigned n, typename... Types>
using N = typename __N<n, Types...>::Result;

//------------------------------------------------------------------------------------------------//

template <typename __First, typename... __Rest>
struct __N<0, __First, __Rest...>
{
    using Result = __First;
};

template <Unsigned __n, typename __First, typename... __Rest>
struct __N<__n, __First, __Rest...>
{
    using Result = typename __N<(__n - 1), __Rest...>::Result;
};

} // namespace type
} // namespace b

#endif
