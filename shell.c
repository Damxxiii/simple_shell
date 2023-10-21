#include "shell.h"
/**
 * main - entry
 * @ac: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int ac, char **argv)
{
    char *Pprompt = "(Dom&Nuel) $ ";
    char *lineptr = NULL, *lineptr_copy = NULL;
    unsigned int n = 0;
    ssize_t read;
    const char *delim = " \n";
    int num_tokens = 0;
    char *token;
    int i;

    while (1)
    {
	    printf("%s", Pprompt);
	    read = getline(&lineptr, &n, stdin);

	    if (read == -1)
	    {
		    printf("Exiting..\n");
		    return (-1);
	    }

	    lineptr_copy = malloc(sizeof(char) * read);
	    if (lineptr_copy == NULL)
	    {
		    perror("hsh: memory failure");
		    return (-1);
	    }

	    strcpy(lineptr_copy, lineptr);
	    token = strtok(lineptr, delim);

	    while (token != NULL)
	    {
		    num_tokens++;
		    token = strtok(NULL, delim);
	    }
	    num_tokens++;


        argv = malloc(sizeof(char *) * num_tokens);
	token = strtok(lineptr_copy, delim);
	
	for (i = 0; token != NULL; i++)
	{
		argv[i] = malloc(sizeof(char) * strlen(token));
		strcpy(argv[i], token);
		token = strtok(NULL, delim);
		
		argv[i] = NULL;

		execute(argv);
	}
	free(lineptr_copy);
	free(lineptr);

	return (0);
}
