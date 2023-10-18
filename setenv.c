
#include "shell.h"

/**
 * setenv - defines an environment variable
 * and assign a value to it
 *
 * Return: 0 on success
 */

int setenv(const char *name, const char *value, int overwrite)
{
	if (getenv(name) != NULL && overwrite == 0)
	{
		printf(stderr, "Variable %s exists\n", name);
		return -1;
	}

	char *env_var = malloc(strlen(name) + strlen(value) + 2);
	printf(env_var, "%s\n", name, value);
	putenv(env_var);
	return 0;
}

/**
 * unsetenv - deletes an environment variable
 * from the environment of the calling process.
 *
 * Return: 0 on success otherwise -1
 */

int unsetenv(const char *name)
{
	if (getenv(name) == NULL)
	{
		printf(stderr, "Variable %s not found\n", name);
		return -1;
	}

	char *env_var = malloc(strlen(name) + 2);
	printf(env_var, "%s\n", name);
	putenv(env_var);
	
	return 0;
}

}
