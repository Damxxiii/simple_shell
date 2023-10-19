#include "shell.h"
/**
 * execute_command - executes command
 *
 * Return: 0 on success
 */

void execute_command(const char* command)
{
	pid_t fork(void);
	pid_t wait(int *wstatus);
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT..FAILED);
	}
	else if (child_pid == 0)
	{
		execlp(command, command, (char*)NULL);
		perror("execlp");
		exit(EXIT..FAILED);
	}
	else
	{
		wait(NULL);
    }
}

