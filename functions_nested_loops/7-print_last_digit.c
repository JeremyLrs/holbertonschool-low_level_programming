#include "main.h"

/**
 * print_last_digit - Print last digit is for
 * print the last digit number
 *
 * @n: integer to be verified
 *
 * Return: 1 for positive n
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
	{
	lastdigit = lastdigit * -1;
	}
	_putchar (lastdigit + '0');

	return (lastdigit);
}
