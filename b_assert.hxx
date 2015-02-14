#ifndef b_assert

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++98-compat-pedantic"

#ifdef DEBUG
#  error todo
#else
#  include "c/_c_assume.h"
#  define b_assert(x, ...) _c_assume(x)
#endif

#pragma clang diagnostic pop

#endif
