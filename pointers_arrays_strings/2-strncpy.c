#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: aaa
 * @src: bbb
 * @n: ccc
 *
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}
