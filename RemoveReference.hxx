#ifndef b_RemoveReference_hxx_
#define b_RemoveReference_hxx_

namespace b {

template <typename T> struct __RemoveReference      { using Result = T; };
template <typename T> struct __RemoveReference<T&>  { using Result = T; };
template <typename T> struct __RemoveReference<T&&> { using Result = T; };

template <typename T>
using RemoveReference = typename __RemoveReference<T>::Result;

} // namespace b

#endif
