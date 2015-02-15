#ifndef b_runtime_write_output_hxx_
#define b_runtime_write_output_hxx_

#include "c/STDOUT_FILENO.h"
#include "c/write_.h"

namespace b {
namespace runtime {
namespace write {

static inline
void
output(const void* data, size_t length) noexcept
{
    ::c::write_(STDOUT_FILENO, data, length); // XXX: errors ignored
}

} // namespace exit
} // namespace runtime
} // namespace b

#endif
