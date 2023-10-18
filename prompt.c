#include "shell.h"
/**
 * main - prints a command prompt
 *
 * Return: void
 */
int main(void)
{
	char *buf;
	size_t n;

	buf = malloc(sizeof(char));
	printf("Welcome, Enter your name");
	printf("Name : %s", buf);

	free(buf);

	return (0);
}
