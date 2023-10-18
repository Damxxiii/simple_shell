#include "shell.h"

void execute_command(const char* command)
{
    /*
    initializes and creates a child process
    */
    pid_t fork(void);
    pid_t wait(int *wstatus);
    pid_t child_pid = fork();

    if (child_pid == -1)
    {
        /*
        process prints to standard error
        */
        perror("fork");
        exit(EXIT_FAILURE);
    }
    else if (child_pid == 0)
    {
        /*
        CHILD PROCESS
        this function creates a child process that executes the command
        */
        execlp(command, command, (char*)NULL);
        perror("execlp");
        exit(EXIT_FAILURE);
    }
    else
    {
        /*
        PARENT PROCESS
        programmed to wait till the child process completes
        */
        wait(NULL);
    }
}

