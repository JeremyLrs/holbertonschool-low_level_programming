#include "main.h"

/**
 * _islower -  check if is lowercase
 * @c: character verified
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);

	return (0);
}
