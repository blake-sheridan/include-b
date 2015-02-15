#ifndef b_runtime_exit_failure_hxx_
#define b_runtime_exit_failure_hxx_

#include "c/_exit.h"

namespace b {
namespace runtime {
namespace exit {

[[noreturn]]
static inline
void
failure() noexcept
{
    _exit(1);
}

} // namespace exit
} // namespace runtime
} // namespace b

#endif
