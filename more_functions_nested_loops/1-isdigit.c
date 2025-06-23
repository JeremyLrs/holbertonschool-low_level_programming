#include "main.h"

/**
 * _isdigit - is function that checks for digit (0 through 9)
 * @c: is an integer to be verified
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
