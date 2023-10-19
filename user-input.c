#include "shell.h"

/**
 * parse_command - a function that reads from use input
 * and executes the eof character
 *
 * Return: 0 on success
*/

void parse_command(char *command, size_t size)
{
    if (fgets(command, size, stdin)== NULL)
    {
        if (feof(stdin))
        {
            my_printf("\n");
            exit(EXIT_SUCCESS);
        }
        else
        {
            my_printf("error while reading input. \n");
            exit(EXIT_FAILURE);
        }  
        
    
    }
    
}
