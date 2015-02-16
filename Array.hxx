#ifndef b_Array_hxx_
#define b_Array_hxx_

#include "b/Unsigned.hxx"
#include "b/assert!.hxx"
#include "b/move.hxx"

namespace b {

template <typename __Element, Unsigned __N>
struct Array
{
    using Element = __Element;

    static
    const Unsigned
    N = __N;

    //--------------------------------------------------------------------------------------------//
    // Constructors

    constexpr explicit
    Array()
        : __data()
    {
    }

    constexpr explicit
    Array(const Element& initial)
        : Array() // constexpr
    {
        for (Unsigned i = 0; i < N; i++)
            this->__data[i] = initial;
    }

    constexpr explicit
    Array(const Array& copy)
        : Array() // constexpr
    {
        (*this) = copy;
    }

    constexpr explicit
    Array(Array&& move)
        : Array() // constexpr
    {
        (*this) = b::move(move);
    }

    constexpr explicit
    Array(const Element(& copy_c)[N])
        : Array() // constexpr
    {
        (*this) = copy_c;
    }

    constexpr explicit
    Array(Element(&& move_c)[N])
        : Array() // constexpr
    {
        (*this) = b::move(move_c);
    }

    //--------------------------------------------------------------------------------------------//
    // Assignment

    constexpr
    Array&
    operator
    =(const Array& copy) noexcept
    {
        for (Unsigned i = 0; i < N; i++)
            this->__data[i] = copy.__data[i];

        return *this;
    }

    constexpr
    Array&
    operator
    =(Array&& move) noexcept
    {
        for (Unsigned i = 0; i < N; i++)
            this->__data[i] = b::move(move.__data[i]);

        return *this;
    }

    constexpr
    Array&
    operator
    =(const Element(& copy_c)[N]) noexcept
    {
        for (Unsigned i = 0; i < N; i++)
            this->__data[i] = copy_c[i];

        return *this;
    }

    constexpr
    Array&
    operator
    =(Element(&& move_c)[N]) noexcept
    {
        for (Unsigned i = 0; i < N; i++)
            this->__data[i] = b::move(move_c[i]);

        return *this;
    }

    //--------------------------------------------------------------------------------------------//
    // Properties

    /*
     * Return a constant pointer to the underlying data.
     */
    constexpr
    const Element*
    data() const noexcept
    {
        return this->__data;
    }

    //--------------------------------------------------------------------------------------------//
    // Methods

    /*
     * Return whether this array ends with a specific subarray.
     */
    template <Unsigned M>
    constexpr
    bool
    ends_with(const Array<Element, M>& other) const noexcept
    {
        if (N < M)
            return false;

        const Element*
        x = this->data() + (N - M);

        const Element*
        y = other.data();

        const Element* const
        x_end = x + M;

        for (; x != x_end; ++x, ++y)
            if (!(*x == *y))
                return false;

        return true;
    }

    /*
     * Return whether this array starts with a specific subarray.
     */
    template <Unsigned M>
    constexpr
    bool
    starts_with(const Array<Element, M>& other) const noexcept
    {
        if (N < M)
            return false;

        const Element*
        x = this->data();

        const Element*
        y = other.data();

        const Element* const
        x_end = x + M;

        for (; x != x_end; ++x, ++y)
            if (!(*x == *y))
                return false;

        return true;
    }

    //--------------------------------------------------------------------------------------------//
    // Sized

    static constexpr
    Unsigned
    length() noexcept
    {
        return N;
    }

    //--------------------------------------------------------------------------------------------//
    // Iterable

    constexpr
    const Element*
    begin() const noexcept
    {
        return &this->__data[0];
    }

    constexpr
    const Element*
    end() const noexcept
    {
        return &this->__data[N];
    }

    //--------------------------------------------------------------------------------------------//
    // Container

    constexpr
    bool
    contains(const Element& element) const noexcept
    {
        for (auto curr : *this)
            if (curr == element)
                return true;

        return false;
    }

    constexpr
    Element&
    operator
    [](Unsigned i) const noexcept
    {
        b_assert(i < N, "out of bounds");
        return this->__data[i];
    }

    //--------------------------------------------------------------------------------------------//
    // Equality

    constexpr
    bool
    operator
    ==(const Array& other) const noexcept
    {
        const Element*
        x = this->__data;

        const Element*
        y = other.__data;

        const Element* const
        x_end = x + N;

        for (; x != x_end; ++x, ++y)
            if (!(*x == *y))
                return false;

        return true;
    }

    constexpr
    bool
    operator
    !=(const Array& other) const noexcept
    {
        return !(*this == other);
    }

  private:
    Element
    __data[N];
};

} // namespace b

#endif
