#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>


void my_printf(const char* format);
void display_prompt(void);
void execute_command(const char* command);
void parse_command(char* command, size_t size);

#endif
