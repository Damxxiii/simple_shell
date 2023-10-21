#include "shell.h"
<<<<<<< HEAD
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
=======

int main(int ac, char **argv)
{
    char *lineptr = NULL, *lineptr_copy = NULL;
    size_t n = 0;
    ssize_t nchars_read;
>>>>>>> 34660a9754589c6c7b934751b36de3d37bfa8c68
    const char *delim = " \n";
    int num_tokens = 0;
    char *token;
    int i;

<<<<<<< HEAD
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
=======
    /* declaring void variables */
    (void)ac;

    /* Create a loop for the shell's prompt */
    while (1)
    {
        display_prompt();
        nchars_read = getline(&lineptr, &n, stdin);
        /* check if the getline function failed or reached EOF or user use CTRL + D */
        if (nchars_read == -1)
        {
            my_printf("Exiting shell....\n");
            return (-1);
        }

        /* allocate space for a copy of the lineptr */
        lineptr_copy = malloc(sizeof(char) * nchars_read);
        if (lineptr_copy == NULL)
        {
            perror("hsh: memory allocation error");
            return (-1);
        }
        /* copy lineptr to lineptr_copy */
        strcpy(lineptr_copy, lineptr);

        /********** split the string (lineptr) into an array of words ********/
        /* calculate the total number of tokens */
        token = strtok(lineptr, delim);

        while (token != NULL)
        {
            num_tokens++;
            token = strtok(NULL, delim);
        }
        num_tokens++;

        /* Allocate space to hold the array of strings */
        argv = malloc(sizeof(char *) * num_tokens);

        /* Store each token in the argv array */
        token = strtok(lineptr_copy, delim);

        for (i = 0; token != NULL; i++)
        {
            argv[i] = malloc(sizeof(char) * strlen(token));
            strcpy(argv[i], token);

            token = strtok(NULL, delim);
        }
        argv[i] = NULL;

        /* execute the command */
        execute_cmd(argv);
    }

    /* free up allocated memory */
    free(lineptr_copy);
    free(lineptr);

    return (0);
>>>>>>> 34660a9754589c6c7b934751b36de3d37bfa8c68
}
