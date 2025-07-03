#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: aaa
 * @s2: bbb
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int len = 0;

	while ((s1[len] != '\0') && (s2[len] != '\0'))
	{
		if (s1[len] - s2[len] != 0)
		{
			return (s1[len] - s2[len]);
		}
		len++;
	}
	return (0);
}