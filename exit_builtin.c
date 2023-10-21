#include "shell.h"
/**
 * main - handles exit
 *
 * Return: 0 on success
 */
int main(void)
{
	char command;

    // Get user input
    my_printf("Enter a command: ");
    fgets(command, sizeof(command), stdin);

    // Remove the newline character from the command
    command[strcspn(command, "\n")] = '\0';

    // Check if the user entered the "exit" command
    if (strcmp(command, "exit") == 0) {
        // Call the exit() function to exit the shell
	exit(0);
    }
    
    return (0);
}

