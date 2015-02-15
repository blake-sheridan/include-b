#ifndef b_runtime_debug_error_hxx_
#define b_runtime_debug_error_hxx_

#include "c/alloca.h"
#include "c/memcpy_.h"
#include "c/strlen.h"

#include "b/runtime/exit/failure.hxx"
#include "b/runtime/write/error.hxx"

namespace b {
namespace runtime {

[[noreturn]]
static
void
__debug_error(const char* brief,
              const char* file,
              const char* function,
              decltype(__LINE__) line,
              const char* message = nullptr) noexcept
{
    static const char* FONT_ON  = "\033[31;1m";
    static const char* FONT_OFF = "\033[0m";
    static const char* FILE     = "  * file:     ";
    static const char* FUNCTION = "  * function: ";
    static const char* LINE     = "  * line:     ";

    size_t
    length =  strlen(FONT_ON);
    length += strlen(brief);
    length += strlen(FONT_OFF);

    if (message != nullptr) {
        length += strlen(": ");
        length += strlen(message);
    }
    length += 1;

    length += strlen(FILE);
    length += strlen(file);
    length += 1;

    length += strlen(FUNCTION);
    length += strlen(function);
    length += 1;

    length += strlen(LINE);
    length += 20; // FIXME
    length += 1;

    void*
    data = alloca(length);

    char*
    next = reinterpret_cast<char*>(data);

    memcpy_(next, FONT_ON, strlen(FONT_ON));
    next += strlen(FONT_ON);
    memcpy_(next, brief, strlen(brief));
    next += strlen(brief);
    memcpy_(next, FONT_OFF, strlen(FONT_OFF));
    next += strlen(FONT_OFF);

    if (message != nullptr) {
        memcpy_(next, ": ", 2);
        next += 2;

        memcpy_(next, brief, strlen(message));
        next += strlen(message);
    }
    *next++ = '\n';

    memcpy_(next, FILE, strlen(FILE));
    next += strlen(FILE);
    memcpy_(next, file, strlen(file));
    next += strlen(file);
    *next++ = '\n';

    memcpy_(next, FUNCTION, strlen(FUNCTION));
    next += strlen(FUNCTION);
    memcpy_(next, function, strlen(function));
    next += strlen(function);
    *next++ = '\n';

    memcpy_(next, LINE, strlen(LINE));
    next += strlen(LINE);
    *next++ = (line < 10) ? '0' + static_cast<char>(line) : 'X'; // FIXME
    *next++ = '\n';

    length = static_cast<size_t>(next - reinterpret_cast<char*>(data)); // FIXME

    write::error(data, length);
    exit::failure();
}

} // namespace runtime
} // namespace b

#endif
