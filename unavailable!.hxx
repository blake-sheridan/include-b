#ifndef b_unavailable
#  include "builtin/__has_attribute.h"
#  if __has_attribute(unavailable)
#    define b_unavailable(message) __attribute__((unavailable(message)))
#  elif defined(__GNUC__) && !defined(__clang__)
#    define b_unavailable(message) __attribute__((error(message)))
#  else
#    error
#  endif
#endif
