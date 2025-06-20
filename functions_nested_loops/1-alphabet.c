#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * main - Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 * Return (0)
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
