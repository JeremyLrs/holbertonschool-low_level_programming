#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 *
 * @name: name of print
 * @f: function to print
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
