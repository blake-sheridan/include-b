#ifndef b_runtime_unreachable_error_hxx_
#define b_runtime_unreachable_error_hxx_

#include "b/_runtime/__debug_error.hxx"

namespace b {
namespace _runtime {

[[noreturn]]
static
void
unreachable_error(const char* file,
                  const char* function,
                  decltype(__LINE__) line,
                  const char* message = nullptr) noexcept
{
    __debug_error("unreachable error",
                  file,
                  function,
                  line,
                  message);
}

} // namespace _runtime
} // namespace b

#endif
