#include "shell.h"
/*
function that displays the prompt shown in the terminal
*/
void display_prompt(void)
{
    char input;

    while (1)
        {
            my_printf("nueldom$");
            if (fgets(input, sizeof(input), stdin) == NULL)
            {
                printf("EOF..Exiting..\n");
                break;
            }
        }
    return (0);
}
