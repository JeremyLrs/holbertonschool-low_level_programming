#include "main.h"

/**
 **_strcat - function that
 * concatenates two strings
 * @dest: aaa
 * @src: aaa
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
