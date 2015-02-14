#ifndef b_unreachable

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++98-compat-pedantic"

#ifdef DEBUG
#  error todo
#else
#  include "c/_c_unreachable.h"
#  define b_unreachable(...) _c_unreachable()
#endif

#pragma clang diagnostic pop

#endif
