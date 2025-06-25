#include "main.h"

/**
 * swap_int - function that swaps the values of
 * two integers.
 *
 * @b: is an integer
 * @a: is an integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}
