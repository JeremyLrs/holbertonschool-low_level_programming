#include "function_pointers.h"

/**
 * int_index - is a function  that searches
 * for an integer
 *
 * @array: is the array
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
