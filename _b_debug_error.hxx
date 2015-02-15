#ifndef _b_debug_error
#define _b_debug_error(kind, ...) ::b::__debug_error(kind, __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)

#include "c/alloca.h"
#include "c/memcpy_.h"
#include "c/strlen.h"
#include "c/write_.h"

#include "b/runtime/exit/failure.hxx"

namespace b {

[[noreturn]]
static
void
__debug_error(const char* kind,
              const char* file,
              const char* function,
              decltype(__LINE__) line,
              const char* brief=nullptr,
              const char* details=nullptr) noexcept
{
    static const char* FONT_ON  = "\033[31;1m";
    static const char* FONT_OFF = "\033[0m";
    static const char* FILE     = "  * file:     ";
    static const char* FUNCTION = "  * function: ";
    static const char* LINE     = "  * line:     ";
    static const char* DETAILS  = "  * details:  ";

    size_t
    length =  strlen(FONT_ON);
    length += strlen(kind);
    length += strlen(FONT_OFF);

    if (brief != nullptr) {
        length += strlen(": ");
        length += strlen(brief);
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

    if (details != nullptr) {
        length += strlen(DETAILS);
        length += strlen(details);
        length += 1;
    }

    void*
    data = alloca(length);

    char*
    next = reinterpret_cast<char*>(data);

    memcpy_(next, FONT_ON, strlen(FONT_ON));
    next += strlen(FONT_ON);
    memcpy_(next, kind, strlen(kind));
    next += strlen(kind);
    memcpy_(next, FONT_OFF, strlen(FONT_OFF));
    next += strlen(FONT_OFF);

    if (brief != nullptr) {
        memcpy_(next, ": ", 2);
        next += 2;

        memcpy_(next, brief, strlen(brief));
        next += strlen(brief);
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

    if (details != nullptr) {
        memcpy_(next, DETAILS, strlen(DETAILS));
        next += strlen(DETAILS);
        memcpy_(next, details, strlen(details));
        next += strlen(details);
        *next++ = '\n';
    }

    length = static_cast<size_t>(next - reinterpret_cast<char*>(data)); // FIXME

    write_(2, data, length);

    runtime::exit::failure();
}

} // namespace b

#endif
