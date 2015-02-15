#ifndef b_runtime_exit_failure_hxx_
#define b_runtime_exit_failure_hxx_

#include "c/_exit.h"

namespace b {
namespace _runtime {

[[noreturn]]
static inline
void
exit_failure() noexcept
{
    _exit(1);
}

} // namespace _runtime
} // namespace b

#endif
