#ifndef b_assert

// Allow either:
//     b_assert(x)
//     b_assert(x, "message")
// Clang issues this warning, but both work just fine with my GCC.
// I couldn't find a way to push this, even with `_Pragma`.
#pragma clang diagnostic ignored "-Wgnu-zero-variadic-macro-arguments"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++98-compat-pedantic"

#ifdef DEBUG
#  include "b/_runtime/assertion_error.hxx"
#  define b_assert(x, ...) if (!(x)) ::b::_runtime::assertion_error(__FILE__, __FUNCTION__, __LINE__, #x, ##__VA_ARGS__);
#else
#  include "builtin/__builtin_assume.h"
#  define b_assert(x, ...) __builtin_assume(x)
#endif

#pragma clang diagnostic pop

#endif
