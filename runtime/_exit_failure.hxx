#ifndef b_runtime_exit_failure_hxx_
#define b_runtime_exit_failure_hxx_

#include "c/_exit.h"

namespace b {
namespace runtime {

[[noreturn]]
static inline
void
_exit_failure() noexcept
{
    _exit(1);
}

} // namespace runtime
} // namespace b

#endif
