
#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>

typedef struct Alias
{
	char name[MAX_NAME_LENGTH];
	char value[MAX_VALUE_LENGTH];
	struct Alias* next;
}

int main(int ac, char **argv)
int input(char *s, int length);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
char *getenv(const char *name);
int setenv(const char *name, const char *value, int overwrite);
int unsetenv(const char *name);
extern char **environ;
void execmd(char *argv[]);
void execute_command(const char* command);
void add_alias(Alias** head, const char* name, const char* value);
void print_aliases(Alias* head);
void update_aliases(Alias** head, const char* names[], const char* values[]);
#endif

