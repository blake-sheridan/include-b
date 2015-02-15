#ifndef b_runtime_assertion_error_hxx_
#define b_runtime_assertion_error_hxx_

#include "b/_runtime/__debug_error.hxx"

namespace b {
namespace _runtime {

[[noreturn]]
static
void
assertion_error(const char* file,
                const char* function,
                decltype(__LINE__) line,
                const char* expression,
                const char* message = nullptr) noexcept
{
    __debug_error("assertion error",
                  file,
                  function,
                  line,
                  message == nullptr ? expression : message);
}

} // namespace _runtime
} // namespace b

#endif
