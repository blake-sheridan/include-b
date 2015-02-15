#ifndef b_array_reverse_Iterator_hxx_
#define b_array_reverse_Iterator_hxx_

namespace b {
namespace array {
namespace reverse {

template <typename Element>
struct Iterator
{
    constexpr explicit
    Iterator(const Element* element)
        : __curr(element)
    {
    }

    //--------------------------------------------------------------------------------------------//

    constexpr
    bool
    operator
    !=(const Iterator& other) const noexcept
    {
        return this->__curr != other.__curr;
    }

    constexpr
    const Element&
    operator
    *() const noexcept
    {
        return *this->__curr;
    }

    constexpr
    Iterator&
    operator
    ++() noexcept
    {
        --this->__curr;
        return *this;
    }

  private:
    const Element*
    __curr;
};

} // namespace reverse
} // namespace array
} // namespace b

#endif
