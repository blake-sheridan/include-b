#ifndef b_runtime_exit_success_hxx_
#define b_runtime_exit_success_hxx_

#include "c/_exit.h"

namespace b {
namespace runtime {
namespace exit {

[[noreturn]]
static inline
void
success() noexcept
{
    _exit(0);
}

} // namespace exit
} // namespace runtime
} // namespace b

#endif
