#include "main.h"

/**
 * *_memset - function that fills memory with
 * a constant byte
 *
 * @s: is the memory area
 * @b: is constant byte
 * @n: is number of first bytes
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
