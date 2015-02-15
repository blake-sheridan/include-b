#ifndef b_runtime_exit_success_hxx_
#define b_runtime_exit_success_hxx_

#include "c/_exit.h"

namespace b {
namespace _runtime {

[[noreturn]]
static inline
void
exit_success() noexcept
{
    _exit(0);
}

} // namespace _runtime
} // namespace b

#endif
