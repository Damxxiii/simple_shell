#include "shell.h"
/*
This is the main program fuction that controls the working
of the shell, it recieves command  contains several function like 
display prompt();
*/
int main(void)
{
    char command[132];
    while (true)
    {
        display_prompt();
        execute_command(command);
        parse_command(command, sizeof(command));
        
    }
    return 0;
}
