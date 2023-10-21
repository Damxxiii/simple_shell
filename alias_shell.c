#include "shell.h"
/**
 * main - argument for alias.c
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char* argv[])
{
    Alias* aliases = NULL;

    if (argc == 1)
    {
	    // No arguments provided, print all aliases
	    print_aliases(aliases);
    }
    else if (argc >= 2)
    {
	    // Multiple arguments provided, define or update aliases
	    char* names[argc];
	    char* values[argc];
	    for (int i = 1; i < argc; i++)
	    {
		    char* name = strtok(argv[i], "=");
		    char* value = strtok(NULL, "=");
		    names[i - 1] = name;
		    values[i - 1] = value;
	    }
	    names[argc - 1] = NULL;
	    values[argc - 1] = NULL;
	    update_aliases(&aliases, names, values)
    }

    return (0);
}

