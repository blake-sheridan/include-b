#ifndef b_runtime_write_output_hxx_
#define b_runtime_write_output_hxx_

#include "c/STDOUT_FILENO.h"
#include "c/write_.h"

namespace b {
namespace _runtime {

static inline
void
write_output(const void* data, size_t length) noexcept
{
    ::c::write_(STDOUT_FILENO, data, length); // XXX: errors ignored
}

} // namespace _runtime
} // namespace b

#endif
