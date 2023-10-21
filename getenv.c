#include "shell.h"
/**
 * getenv -  retrieve env variable
 *
 * Return: 0 on success
 */

char* getenv(const char* name)
{
	for (int i = 0; environ[i] != NULL; i++)
	{
        // Split the environment variable into name and value
	char* variable = strdup(environ[i]);
	char* variable_name = strtok(variable, "=");
	char* variable_value = strtok(NULL, "=");

        // Compare the name
	if (strcmp(variable_name, name) == 0)
	{
		free(variable);
		return variable_value;
        }
	free(variable);
    }
	return (NULL);
}

