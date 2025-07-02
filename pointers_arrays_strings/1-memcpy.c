#include "main.h"

/**
 * *_memcpy - unction that copies memory area
 * @dest: destination of memory area
 * @src: source of memory area
 * @n: number of bytes
 *
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
