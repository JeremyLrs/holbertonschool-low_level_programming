#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * print_alphabet - print alphabet
 *
 * Return: (0)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
	_putchar('\n');
}
