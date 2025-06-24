#include "main.h"

/**
 * print_line - that draws a straight line
 * @n: is an integer
 *
 * Return: 0
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
