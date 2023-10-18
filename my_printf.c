#include "shell.h"
/*
A function that acts as printf 
returns void and accept one argument 
which is a string
*/
void my_printf(const char* format)
{
    write(STDOUT_FILENO, format, strlen(format));
}
