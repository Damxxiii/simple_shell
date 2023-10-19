#include "shell.h"
/**
 * main - handles path
 *
 * Return: 0 on success
 */


int main(void)
{
	char *command = "cd";
	char *path = getenv("PATH");
	char *directory = strtok(path, ":");

	while (directory != NULL)
	{
		char max_path;
		printf(max_path, sizeof(max_path), "%s/%s", directory, command);

		if (access(max_path != -1))
		{
			char *argv[] = (max_path, NULL);
			execve(max_path, argv, NULL);
			break;
		}

		directory = strtok(NULL, ":");
	}
	printf("Command Error: %s\n", command);
	return (0);
}
