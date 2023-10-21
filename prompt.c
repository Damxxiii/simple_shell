#include "shell.h"
/**
 * main - prints a command prompt
 * @ac: argument count
 * @argv: argument vector
 *
 * Return: void
 */

int main(int ac, char **argv)
{
	char *Pprompt = "(Dom&Nuel) $ ";
	char *lineptr;
	unsigned int n = 0;

	printf("%s", Pprompt);
	getline(&lineptr, &n, stdin);
	printf("%s\n", lineptr);

	free(lineptr);
	return (0);
}


