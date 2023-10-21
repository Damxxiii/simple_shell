#include "shell.h"
/**
 * main - handles the environment
 *
 * Return: 0 on success
 */
int main(void)
{
	char** env = environ;

	while (*env != NULL)
	{
		my_printf("%s\n", *env);
		env++;
	}
	return (0);
}

