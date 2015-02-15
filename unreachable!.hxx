#ifndef b_unreachable

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++98-compat-pedantic"

#ifdef DEBUG
#  include "b/runtime/unreachable_error.hxx"
#  define b_unreachable(...) b::runtime::unreachable_error(__FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#  include "c/_c_unreachable.h"
#  define b_unreachable(...) _c_unreachable()
#endif

#pragma clang diagnostic pop

#endif
