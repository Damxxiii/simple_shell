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
	getline(&buf, &n, stdin);
	printf("Name : %s", buf);
	printf("Buffer size: %ld\n", n);

	free(buf);

	return (0);
}
