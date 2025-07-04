#include "main.h"

/**
 * sqrt_sub_func - function that returns the
 * natural square root of a number.
 *
 * @n: is a number sqrt
 * @i: is iterator
 *
 * Return: 0
 */

int sqrt_sub_func(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (sqrt_sub_func(n, i + 1));
}

/**
 * _sqrt_recursion - natural square root
 * @n: is a number
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_sub_func(n, 0));
}
