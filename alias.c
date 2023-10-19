#include "shell.h"
/**
 * print_all_aliases - prints all aliases
 * @name: alias name
 * @value: alias value
 * Return: 0 on success
 */

void print_all_aliases()
{
	int i;
	size_t num_alias;

	for (int i = 0; i < num_alias; i++)
	{
		printf("%s='%s'\n", aliases[i].name, aliases[i].value);
	}
}

