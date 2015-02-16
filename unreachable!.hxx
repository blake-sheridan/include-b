#ifndef b_unreachable

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++98-compat-pedantic"

#ifdef DEBUG
#  include "b/_runtime/unreachable_error.hxx"
#  define b_unreachable(...) b::_runtime::unreachable_error(__FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#  include "builtin/__builtin_unreachable.h"
#  define b_unreachable(...) __builtin_unreachable()
#endif

#pragma clang diagnostic pop

#endif
