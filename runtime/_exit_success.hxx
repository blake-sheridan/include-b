#ifndef b_runtime_exit_success_hxx_
#define b_runtime_exit_success_hxx_

#include "c/_exit.h"

namespace b {
namespace runtime {

[[noreturn]]
static inline
void
_exit_success() noexcept
{
    _exit(0);
}

} // namespace runtime
} // namespace b

#endif
