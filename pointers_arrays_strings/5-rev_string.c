#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: is an integer
 *
 *Return: 0
 */

void rev_string(char *s)
{
	int len = 0, i + 0, j;
	char c;

	while (s[len] != '\0')
	{
		len++;
	}

	for (j = len - 1; i < (len / 2); i++, j--)
	{
		c = (s[i]);
		s[i] = s[j];
		s[j] = c;
	}
}
