#include <cstdarg>
#include <iostream>

void simplePrint(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    while (*fmt) {
        if (*fmt == 'd') {
            int i = va_arg(args, int);
            std::cout << i << " ";
        }
        ++fmt;
    }
    va_end(args);
    std::cout << "\n";
}
int main()
{
    simplePrint("dd", 10, 20);
    return 0;
}