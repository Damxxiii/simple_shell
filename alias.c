#include "shell.h"
/**
 * add_alias - creates a new alias
 * @name: name of alias
 * @value: value of alias
 *
 * Return: 0 on success
 */

void add_alias(Alias** head, const char* name, const char* value)
{
	Alias* new_alias = (Alias*)malloc(sizeof(Alias));
	strncpy(new_alias->name, name, MAX_NAME_LENGTH);
	strncpy(new_alias->value, value, MAX_VALUE_LENGTH);
	new_alias->next = *head;
	*head = new_alias;
}

/**
 * print_aliases - prints all aliases
 * @name: alias name
 * @value: alias value
 * Return: 0 on success
 */

void print_aliases(Alias* head)
{
	Alias* A1 = head;

	while (A1 != NULL)
	{
		my_printf("%s='%s'\n", A1->name, A1->value);
        A1 = A1->next;
    }
}
/**
 * update_alias -  Defines an alias for each name whose value is given.
 * If name is already an alias, replaces its value with value
 *
 * Return: void
 */
void update_aliases(Alias** head, const char* names[], const char* values[])
{
	for (int i = 0; names[i] != NULL; i++)
	{
        Alias* A1 = *head;

	while (A1 != NULL)
	{
		if (strcmp(A1->name, names[i]) == 0)
		{
			strncpy(A1->value, values[i], MAX_VALUE_LENGTH);
			break;
		}
		A1 = current->next;
	}
	if (A1 == NULL)
	{
		add_alias(head, names[i], values[i]);
	}
	
	}
}

