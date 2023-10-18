#include "shell.h"

int main(int argc, char *argv[]) {
    char *directory;

    if (argc == 1)
    {
	    directory = getenv("HOME");
    } else if (argc == 2)
    {
	    directory = argv[1];
    } else
    {
	    printf(stderr, "Usage: cd [DIRECTORY]\n");
	    return 1;
    }

    if (chdir(directory) != 0)
    {
	    perror("cd");
	    return 1;
    }

    if (setenv("PWD", directory, 1) != 0)
    {
	    perror("setenv");
	    return 1;
    }
    return 0;
}

