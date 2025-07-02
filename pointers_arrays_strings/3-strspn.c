#include "main.h"

/**
 * _strspn - function that gets the length
 * of a prefix substring.
 *
 * @s: string of caracter
 * @accept: autorised character
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int found;

	while (s[i] != '\0')
	{
		found = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (!found)
		{
			break;
		}
		i++;
	}
	return (i);
}
