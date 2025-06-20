#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: integer verified
 *
 *Return: 1 for n positive
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
