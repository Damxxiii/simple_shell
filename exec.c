#include "shell.h"
/**
 * execmd - executes command
 * @ac: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

void execmd(char *argv[])
{
	char *command == NULL;

	if (argv)
	{
		command = argv[0];

		/* Then execute*/
		if (execve(command, argv, NULL) == -1)
		{
			perror("Denied:");
		}
	}
	return (0);
}
