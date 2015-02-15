#ifndef b_runtime_write_error_hxx_
#define b_runtime_write_error_hxx_

#include "c/STDERR_FILENO.h"
#include "c/write_.h"

namespace b {
namespace _runtime {

static inline
void
write_error(const void* data, size_t length) noexcept
{
    ::c::write_(STDERR_FILENO, data, length); // XXX: errors ignored
}

} // namespace _runtime
} // namespace b

#endif
