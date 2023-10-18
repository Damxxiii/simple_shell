#include "shell.h"
/**
 * main - gets line size
 *
 * Return: buffer size
 */
int main(void)
{
	char *buf;
	size_t n = 10;

	buf = malloc(sizeof(char) * 10);
	printf("Welcome, Enter your name");
	getline(&buf, &n, stdin);
	printf("Name : %s", buf);
	printf("Buffer size: %ld\n", n);

	free(buf);

	return (0);
}
