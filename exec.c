#include "shell.h"

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
}
