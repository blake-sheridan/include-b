#ifndef b_Tuple_hxx_
#define b_Tuple_hxx_

#include "b/If.hxx"
#include "b/Unsigned.hxx"
#include "b/forward.hxx"
#include "b/move.hxx"
#include "b/type/N.hxx"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wpadded"

namespace b {

/*
 * A small tuple implementation.
 */
template <typename...>
struct Tuple;

//------------------------------------------------------------------------------------------------//
// N = 0

template <>
struct Tuple<>
{
};

//------------------------------------------------------------------------------------------------//
// N = 1

template <typename __X>
struct Tuple<__X>
{
    template <Unsigned __n>
    using Element = type::N<__n, __X>;

    //--------------------------------------------------------------------------------------------//

    constexpr explicit
    Tuple(__X&& x)
        : __x(move(x))
    {
    }

    //--------------------------------------------------------------------------------------------//

    template <Unsigned __n>
    constexpr
    const Element<__n>&
    element() const noexcept
    {
        static_assert(__n == 0, "out of bounds");
        return this->__x;
    }

  private:
    __X
    __x;
};

//------------------------------------------------------------------------------------------------//
// N > 1

template <typename __First, typename... __Rest>
struct Tuple<__First, __Rest...>
{
    template <Unsigned __n>
    using Element = type::N<__n, __First, __Rest...>;

    //--------------------------------------------------------------------------------------------//

    constexpr
    Tuple(__First&& first, __Rest&&... rest)
        : __first(move(first))
        , __rest(forward<__Rest>(rest)...)
    {
    }

    //--------------------------------------------------------------------------------------------//

    template <Unsigned __n>
    constexpr
    If<(__n == 0), const Element<__n>&>
    element() const noexcept
    {
        return this->__first;
    }

    template <Unsigned __n>
    constexpr
    If<(__n != 0), const Element<__n>&>
    element() const noexcept
    {
        return this->__rest.template element<(__n - 1)>();
    }

  private:
    __First
    __first;

    Tuple<__Rest...>
    __rest;
};

} // namespace b

#pragma clang diagnostic pop

#endif
