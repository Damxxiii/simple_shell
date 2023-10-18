#include "shell.h"

char *get_path(char *command)
{
	char *path, *path_copy, path_token, *file_path;
	int command_length, dir_length;
	struct stat buffer;

	path = getenv("path");

	if (path)
	{
		path_copy = strdup(path);
		command_length = strlen(command);

		printf("PATH = %s\n", getenv("PATH"));
	}
	return (0);
}
