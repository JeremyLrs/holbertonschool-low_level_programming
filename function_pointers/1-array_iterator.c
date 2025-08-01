#include "function_pointers.h"

/**
 * array_iterator - function that executes
 * a function given as a parameter
 * on each element of an array
 *
 * @array: array is parameter
 * @size: is the size of array
 * @action: is pointer to the function
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
