#include "shell.h"
/**
 * main - prints current environment
 *
 * Return: 0 on success
 */

extern char **environ;

int main(void)
{
	int i;

	for (int i = 0; environ[i] != NULL; i++)
	{
		printf("%s\n", environ[i]);
	}
	
	return (0);
}

