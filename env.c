#include "shell.h"
/**
 * get_env - function returns a pointer to the string
 * containing the value for the specified
 * variable name in the current environment
 *
 * Return: ptr to string
 */

char *get_env(const char *name)
{
        extern char **environ;
        int i;
        char *token;

        i = 0;
        while (environ[i])
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

int main(void)
{
        char *path = get_env("Home");

        printf("%s\n", path);

        return (0);
}

/**
 * setenv - defines an environment variable
 * and assign a value to it
 *
 * Return: 0 on success
 */

int setenv(const char *name, const char *value, int overwrite)
{
	if (get_env(name) != NULL && overwrite == 0)
	{
		printf(stderr, "Variable %s exists\n", name);
		return (-1);
	}

	char *env_var = malloc(strlen(name) + strlen(value) + 2);
	printf(env_var, "%s\n", name, value);
	putenv(env_var);
	return (0);
}

/**
 * unsetenv - deletes an environment variable
 * from the environment of the calling process.
 *
 * Return: 0 on success otherwise -1
 */

int unsetenv(const char *name)
{
	if (get_env(name) == NULL)
	{
		printf(stderr, "Variable %s not found\n", name);
		return (-1);
	}

	char *env_var = malloc(strlen(name) + 2);
	printf(env_var, "%s\n", name);
	putenv(env_var);
	
	return (0);
}

