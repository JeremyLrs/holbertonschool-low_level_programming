#include "main.h"
/**
 * *array_range - function that creates
 * an array of integers
 *
 * @min: value of min
 * @max: value of max
 *
 * Return: 0
 */

int *array_range(int min, int max)
{
	int len;
	int *array;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;

	array = malloc(sizeof(int) * len);
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);

	for (i = 0; i < len; i++)
	{
		array[i] = min + i;
	}
	return (array);

}
