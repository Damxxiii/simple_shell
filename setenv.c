#include "shell.h"

/**
 * setenv - sets environment
 *
 * Return: 1 on success otherwise -1
 */
int setenv(const char *name, const char *value, int overwrite)
{
    // Check if the variable already exists
    if (getenv(name) != NULL && overwrite == 0)
    {
	    my_printf(stderr, "Variable %s already exists\n", name);
	    return (-1);
    }
    
    char *env_var = malloc(strlen(name) + strlen(value) + 2);
    my_printf(env_var, "%s=%s", name, value);

    // Set the environment variable using putenv
    if (putenv(env_var) != 0)
    {
	    my_printf(stderr, "Failed to set %s\n", name);
	    return (-1);
    }
    
    return (0);

/**
 * unsetenv - unsets environment
 *
 * Return: 1 on success otherwise -1
 */
int unsetenv(const char *name)
{
    // Check if the variable exists
    if (getenv(name) == NULL)
    {
	    my_printf(stderr, "Variable %s does not exist\n", name);
	    return (-1);
    }

    if (unsetenv(name) != 0)
    {
        my_printf(stderr, "Failed to unset %s\n", name);
        return (-1);
    }
    
    return (0);
}
