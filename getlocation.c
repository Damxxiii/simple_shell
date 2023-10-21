#include "shell.h"
/**
 * get_location - Locates a command in the PATH.
 * @command: The command to locate.
 *
 * Return: 0 on success otherwise -1
 */

char *get_location(char *command)
{
	char *path, *path_copy, *path_token, *file_path;
	int command_length, directory_length;
	struct stat buffer;

	path = getenv("PATH");

	if (path)
	{
        /* Duplicate the path string -> remember to free up memory for this because strdup allocates memory that needs to be freed*/ 
		path_copy = strdup(path);
        /* Get length of the command that was passed */
		command_length = strlen(command);


        /*break down the path variable and get all the directories available*/
		path_token = strtok(path_copy, ":");

		while(path_token != NULL){
            /* Get the length of the directory*/
			directory_length = strlen(path_token);
            /* allocate memory for storing the command name together with the directory name */
			file_path = malloc(command_length + directory_length + 2); /* NB: we added 2 for the slash and null character we will introduce in the full command */
            /* to build the path for the command, let's copy the directory path and concatenate the command to it */
			strcpy(file_path, path_token);
			strcat(file_path, "/");
			strcat(file_path, command);
			strcat(file_path, "\n");

			if (stat(file_path, &buffer) == 0)
			{

                /* free up allocated memory before returning your file_path */
				free(path_copy);

				return (file_path);
			}
			else
			{
				free(file_path);
				path_token = strtok(NULL, ":");
			}
		}

		free(path_copy);

		if (stat(command, &buffer) == 0)
		{
			return (command);
		}

		return (NULL);
}
