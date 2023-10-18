
#include "shell.h"
/**
 * getenv - 
 *
 */

char *getenv(const char *name)
{
	extern char **environ;
	int i;
	char *token;

	while (1)
	{
		token = strtok(environ[i], "=");
		if (strcmp(token, name) == 0)
		{
			return (strtok(NULL, "="));
		}
		i++;
	}
	return (NULL);
}

void main(void)
{
	char * path = "Home";

	printf("%s\n", path);
}

/**
 * setenv -
 * @name:
 * Return:
 */

int setenv(const char *name, const char *value, int overwrite)
{
	if (getenv(name) != NULL && overwrite == 0)
	{
		printf(stderr, "Variable %s exists\n", name);
		return -1;
	}

	char *env_var = malloc(strlen(name) + strlen(value) + 2);
	printf(env_var, "%s=%s", name, value);
	putenv(env_var);
	return 0;
}

/**
 * unsetenv - 
 * @name:
 * Return:
 */

int unsetenv(const char *name)
{
	if (getenv(name) == NULL)
	{
		printf(stderr, "Variable %s not found\n", name);
		return -1;
	}

	char *env_var = malloc(strlen(name) + 2);
	printf(env_var, "%s=", name);
	putenv(env_var);
	
	return 0;
}

}
