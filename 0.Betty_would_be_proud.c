#include <stdio.h>
/**
 * print_numbers -  prints numbers
 * @numbers: integers to print
 * Return: 0
 */
void print_numbers(int numbers[])
{
	int i;

	for (int i = 0; i < max_size; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
}
/**
 * main - print numbers
 * Return: 0
 */
int main(void)
{
	int numbers[max_size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	print_numbers(numbers);
	return (0);
}
