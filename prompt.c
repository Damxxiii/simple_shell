#include "shell.h"
<<<<<<< HEAD
/**
 * main - prints a command prompt
 * @ac: argument count
 * @argv: argument vector
 *
 * Return: void
 */

int main(int ac, char **argv)
{
	char *Pprompt = "(Dom&Nuel) $ ";
	char *lineptr;
	unsigned int n = 0;

	printf("%s", Pprompt);
	getline(&lineptr, &n, stdin);
	printf("%s\n", lineptr);

	free(lineptr);
	return (0);
=======
/*
function that displays the prompt shown in the terminal
*/
void display_prompt(void)
{
    my_printf("nueldom$");
>>>>>>> 34660a9754589c6c7b934751b36de3d37bfa8c68
}


