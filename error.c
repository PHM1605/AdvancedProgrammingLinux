#include "apue.h"
#include <errno.h>
#include <stdarg.h>

void err_quit(const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    va_end(ap);
    exit(1);
}