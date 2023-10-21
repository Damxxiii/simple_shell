#include "shell.h"
/**
 * main - changes directory
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char *directory;

	if (argc == 1)
	{
		directory = getenv("HOME");
	}
	else if (argc == 2)
	{
        // If argument is "-", change to the previous directory
	if (strcmp(argv[1], "-") == 0)
	{
		directory = getenv("OLDPWD");
	}
	else
	{
		directory = argv[1];
	}
	}
	else
	{
		my_printf("Invalid usage of cd command.\n");
		return (0);
	}

    // Change the directory using chdir()
    if (chdir(directory) != 0)
    {
	    perror("cd");
	    return (0);
    }

    // Update the environment variable PWD
    char cwd[1024];

    if (getcwd(cwd, sizeof(cwd)) != NULL)
    {
	    setenv("PWD", cwd, 1);
    }
    else
    {
	    perror("getcwd");
	    return (0);
    }

    return (0);
}
