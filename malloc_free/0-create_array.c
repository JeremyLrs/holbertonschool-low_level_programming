#include "main.h"

/**
 * *create_array - function that creates
 * an array of chars, and initializes it
 * with a specific char.
 *
 * @size: is a size of array
 * @c: is a char
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < size ; i++)
	{
		array[i] = c;
	}
	return (array);
}
