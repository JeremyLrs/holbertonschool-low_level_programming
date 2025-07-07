#include "main.h"

/**
 * *create_array - function that creates
 * an array of chars, and initializes it
 * with a specific char.
 *
 * @c:
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
    int i = 0;

    if (size == 0)
        return (NULL);

    char *array = malloc(sizeof(char) * size);

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
