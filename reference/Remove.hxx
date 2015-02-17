#ifndef b_reference_Remove_hxx_
#define b_reference_Remove_hxx_

namespace b {
namespace reference {

template <typename T> struct __Remove      { using Result = T; };
template <typename T> struct __Remove<T&>  { using Result = T; };
template <typename T> struct __Remove<T&&> { using Result = T; };

/*
 * An implementation of `std::remove_reference_t`.
 */
template <typename T>
using Remove = typename __Remove<T>::Result;

} // namespace reference
} // namespace b

#endif
