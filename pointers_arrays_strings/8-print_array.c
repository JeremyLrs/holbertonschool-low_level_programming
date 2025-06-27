#include "main.h"

/**
 * print_array - function that prints n elements
 * of an array of integers
 *
 * @n: aaaa
 * @a: nnnn
 *
 *
 * Return: 0
 *
 */

void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		printf("%i", a[len]);
		if (len != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
