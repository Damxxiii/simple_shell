#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
void execute_cmd(char **argv);
char *get_location(char *command);
void my_printf(const char* format);
void display_prompt(void);

#endif
