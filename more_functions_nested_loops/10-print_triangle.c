#include "main.h"

/**
 * print_triangle - function that prints
 * a triangle
 *
 * @size: is the size of the triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for ((j = size - i); j > 0; j--)
				_putchar(' ');

			for (j = 0; j < i; j++)
				_putchar('#');

			if (i == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
