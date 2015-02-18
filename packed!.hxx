#ifndef b_packed
#  ifdef __GNUC__
#    define b_packed __attribute__((__packed__))
#  else
#    error todo
#  endif
#endif
