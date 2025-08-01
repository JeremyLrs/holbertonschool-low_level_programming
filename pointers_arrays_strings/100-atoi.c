#include "main.h"

/**
 * _atoi - function that convert a string to an
 * integer.
 *
 * @s:is an integer
 *
 *
 *
 * Return: 0
 *
 */

int _atoi(char *s)
{

	int i, sign = 1, start = 0;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			start = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (start)
		{
			break;
		}
	}
	return (result * sign);
}
