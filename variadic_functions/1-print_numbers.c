#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: is a string
 * @n: is a numbers
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
