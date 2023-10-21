#include "shell.h"
/**
 * my_printf - A function that acts as printf
 * Returns: void
 */

void my_printf(const char* format)
{
    write(STDOUT_FILENO, format, strlen(format));
}
