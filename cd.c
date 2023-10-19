#include "shell.h"
/**
 * main - changes directory
 *
 * Return: PWD
 */

int main(int ac, char *argv[])
{
	char *directory;

       	if (ac == 1)
	{
		directory = getenv("HOME");
	}
	else if (ac == 2)
	{
		directory = argv[1];
	}
	else
	{
		printf(stderr, "Usage: cd [DIRECTORY]\n");
		return (1);
	}

	if (chdir(directory) != 0)
	{
		perror("cd");
		return (1);
	}

	if (setenv("PWD", directory, 1) != 0)
	{
		perror("setenv");
		return (1);
	}
	return (0);
}

