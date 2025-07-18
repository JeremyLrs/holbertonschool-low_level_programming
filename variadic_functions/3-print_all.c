#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_c - print a char
 * @args: argument
 *
 * Return: 0
 */
void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_i - print an int
 * @args: argument
 *
 * Return: 0
 */
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_f - print a float
 * @args: argument
 *
 * Return: 0
 */
void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_s - print a string
 * @args: argument
 *
 * Return: 0
 */
void print_s(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Prints anything based on a format string.
 * @format: List of types of arguments passed to the function
 *
 * Return: 0
 */

void print_all(const char * const format, ...)
{

	va_list args;
	unsigned int i = 0;
	unsigned int j;
	char tab[] = {'c', 'i', 'f', 's', '\0'};
	void (*fun[])(va_list) = {print_c, print_i, print_f, print_s};
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (tab[j] != '\0')
		{
			if (format[i] == tab[j])
			{
				printf("%s", separator);
				fun[j](args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
