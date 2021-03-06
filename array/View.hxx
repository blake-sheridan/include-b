#ifndef b_array_View_hxx_
#define b_array_View_hxx_

#include "b/Unsigned.hxx"
#include "b/assert!.hxx"

namespace b {
namespace array {

template <typename Element>
struct View
{
    //--------------------------------------------------------------------------------------------//
    // Constructors

    constexpr
    View(Element* data, Unsigned length)
        : __0(data)
        , __n(data + length)
    {
    }

    template <Unsigned length>
    constexpr explicit
    View(Element(& data)[length])
        : View(data, length)
    {
    }

    //--------------------------------------------------------------------------------------------//
    // Sized

    constexpr
    Unsigned
    length() const
    {
        b_assert(this->__0 <= this->__n);
        return static_cast<Unsigned>(this->__n - this->__0);
    }

    //--------------------------------------------------------------------------------------------//
    // Iterable

    constexpr
    Element*
    begin() const
    {
        return this->__0;
    }

    constexpr
    Element*
    end() const
    {
        return this->__n;
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
    [](Unsigned offset) const
    {
        b_assert(offset < this->length(), "out of bounds");
        return this->__0[offset];
    }

  private:
    Element*
    __0;

    Element*
    __n;
};

} // namespace array
} // namespace b

#endif
