#include "main.h"

/**
 * _puts - function that prints a string,
 * followed by a new line, to stdout.
 *
 * @str: is a string
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
