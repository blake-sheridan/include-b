#ifndef b_If_hxx_
#define b_If_hxx_

namespace b {

template <bool, typename T> struct __If          { /* substitution failure */ };
template <      typename T> struct __If<true, T> { using Result = T;          };

/*
 * An implementation of `std::enable_if_t`.
 */
template <bool x, typename T=void>
using If = typename __If<x, T>::Result;

} // namespace b

#endif
