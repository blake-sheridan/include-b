#ifndef b_Tuple_hxx_
#define b_Tuple_hxx_

#include "b/If.hxx"
#include "b/Unsigned.hxx"
#include "b/forward.hxx"
#include "b/move.hxx"

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
    static
    const Unsigned
    N = 0;
};

//------------------------------------------------------------------------------------------------//
// N = 1

template <typename __X>
struct Tuple<__X>
{
    static
    const Unsigned
    N = 1;

    //--------------------------------------------------------------------------------------------//
    /* forward */ private: template <Unsigned> struct __Element; public:

    template <Unsigned __i>
    using Element = typename __Element<__i>::Result;

    //--------------------------------------------------------------------------------------------//

    constexpr explicit
    Tuple(__X&& x)
        : __x(move(x))
    {
    }

    //--------------------------------------------------------------------------------------------//

    template <Unsigned __i>
    constexpr
    const Element<__i>&
    element() const noexcept
    {
        static_assert(__i == 0, "out of bounds");
        return this->__x;
    }

  private:
    __X
    __x;

    //--------------------------------------------------------------------------------------------//

    template <Unsigned __i>
    struct __Element
    {
        static_assert(__i == 0, "out of bounds");
        using Result = __X;
    };
};

//------------------------------------------------------------------------------------------------//
// N > 1

template <typename __First, typename... __Rest>
struct Tuple<__First, __Rest...>
{
    static
    const Unsigned
    N = 1 + sizeof...(__Rest);

    //--------------------------------------------------------------------------------------------//
    /* forward */ private: template <Unsigned, typename=void> struct __Element; public:

    template <Unsigned __i>
    using Element = typename __Element<__i>::Result;

    //--------------------------------------------------------------------------------------------//

    constexpr
    Tuple(__First&& first, __Rest&&... rest)
        : __first(move(first))
        , __rest(forward<__Rest>(rest)...)
    {
    }

    //--------------------------------------------------------------------------------------------//

    template <Unsigned __i>
    constexpr
    If<(__i == 0), const Element<__i>&>
    element() const noexcept
    {
        return this->__first;
    }

    template <Unsigned __i>
    constexpr
    If<(__i != 0), const Element<__i>&>
    element() const noexcept
    {
        return this->__rest.template element<(__i - 1)>();
    }

  private:
    __First
    __first;

    Tuple<__Rest...>
    __rest;

    //--------------------------------------------------------------------------------------------//

    template <Unsigned __i, typename __Enable>
    struct __Element
    {
        using Result = typename Tuple<__Rest...>::template Element<(__i - 1)>;
    };

    template <Unsigned __i>
    struct __Element<__i, If<(__i == 0)>>
    {
        using Result = __First;
    };
};

} // namespace b

#pragma clang diagnostic pop

#endif
