#include "shell.h"
/**
 * main - gets line size
 * 
 * Return: buffer size
 */

int main(void)
{
	char *buffer;
	unsigned int n = 10;
	unsigned int characters;

	buffer = malloc(n * sizeof(char));
	if (buffer == NULL)
	{
		perror("buffer error \n");
		exit(1);
	}

	my_printf("Type: ");
	characters = getline(&buffer, &n, stdin);
	my_printf("%lu characters read.\n", characters);
	my_printf("You typed: '%s'\n", buffer);

	free(buffer);

	return 0;
}
