#ifndef b_array_reverse_View_hxx_
#define b_array_reverse_View_hxx_

#include "b/array/View.hxx"
#include "b/array/reverse/Iterator.hxx"

namespace b {
namespace array {
namespace reverse {

template <typename Element>
struct View : private array::View<Element>
{
    // Since there's a good bit of overlap,
    // privately inherit and forward methods individually.
  private:
    using __ForwardView = array::View<Element>;
  public:
    using __ForwardView::View;

    //--------------------------------------------------------------------------------------------//
    // Sized

    using __ForwardView::length;

    //--------------------------------------------------------------------------------------------//
    // Iterable

    using Iterator = reverse::Iterator<Element>;

    constexpr
    Iterator
    begin() const noexcept
    {
        return Iterator(__ForwardView::end() - 1);
    }

    constexpr
    Iterator
    end() const noexcept
    {
        return Iterator(__ForwardView::begin() - 1);
    }

    //--------------------------------------------------------------------------------------------//
    // Container

    using __ForwardView::contains;

    constexpr
    Element&
    operator
    [](Unsigned index) const noexcept
    {
        return __ForwardView::operator [](this->length() - 1 - index);
    }
};

} // namespace reverse
} // namespace array
} // namespace b

#endif
