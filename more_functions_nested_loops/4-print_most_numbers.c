#include "main.h"

/**
 * print_most_numbers - that prints the numbers
 *
 *
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
