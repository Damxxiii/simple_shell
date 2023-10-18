#include "shell.h"

int main()
{
	char command;

	while (1)
	{
		printf("Type a command: ");
		fgets(command, sizeof(command), stdin);
		command[strcspn(command, "\n")] = '\0';

		if (strcmp(command, "exit") == 0)
		{
			exit(0);
		}
	}
	return (0);
}

