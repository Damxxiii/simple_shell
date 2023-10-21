#include "shell.h"
/**
 * main - handles arguments for exit
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		my_printf("Usage: %s status\n", argv[0]);
		return (0);
	}

	int status = atoi(argv[1]);
	exit(status);
}

