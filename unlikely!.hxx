#ifndef b_unlikely
#  include "builtin/__builtin_expect.h"
#  define b_unlikely(x) __builtin_expect(x, 0)
#endif
