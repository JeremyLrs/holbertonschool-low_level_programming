#include "main.h"

/**
 * _isupper - is function that checks for uppercase character
 * @c: is an integer to be verified
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
