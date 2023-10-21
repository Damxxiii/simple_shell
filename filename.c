#include "shell.h"
/**
 * main - execute commands from a file
 * @FILE: contains commands
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
    // Check if a file name is provided as a command line argument
    if (argc != 2)
    {
	    my_ printf("Usage: %s [filename]\n", argv[0]);
	    return (1);
    }

    // Open the file for reading
    FILE *file = open(argv[1], "r");

    if (file == NULL)
    {
	    my_ printf("EOF: %s\n", argv[1]);
	    return (1);
    }
    char command;

    while (fgets(command, sizeof(command), file) != NULL)
    {
        // Remove the trailing newline character from the command
	command[strcspn(command, "\n")] = '\0';

        // Execute the command using system() or any other method you prefer
	system(command);
    }

    // Close the file
    close(file);

    return (0);
}
