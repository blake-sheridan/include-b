#ifndef b_likely
#  include "builtin/__builtin_expect.h"
#  define b_likely(x) __builtin_expect(x, 1)
#endif
