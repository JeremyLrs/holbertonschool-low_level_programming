#include "main.h"
/**
 * check_prime_number - function that returns
 * 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 *@n: is an integer
 *@b: is an integer
 *
 *Return: 0
 */

int check_prime_number(int n, int b)
{
	if (n <= 1 || n % b == 0)
	{
		return (0);
	}
	if (b * b > n)
	{
		return (1);
	}
	return (check_prime_number(n, b + 1));
}
/**
 * is_prime_number - Function that check if the inut
 * integer is a prime number
 *
 *@n: is a number
 *
 * Return: 0
**/
int is_prime_number(int n)
{
	return (check_prime_number(n, 2));
}
