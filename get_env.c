#include "shell.h"
/**
 * getenv - function returns a pointer to the string
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
