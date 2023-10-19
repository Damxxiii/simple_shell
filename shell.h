
#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>


char *getenv(const char *name);
int setenv(const char *name, const char *value, int overwrite);
int unsetenv(const char *name);
extern char **environ;
void execmd(char *argv[]);
void execute_command(const char* command);
void print_all_aliases();
int main(void);
int main(int ac, char *argv[]);
#endif

