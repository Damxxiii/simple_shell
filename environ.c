#include "shell.h"

extern char **environ;

int main(void)
{
	int i;

	for (int i = 0; environ[i] != NULL; i++)
	{
		printf("%s\n", environ[i]);
	}
	
	return (0);
}

