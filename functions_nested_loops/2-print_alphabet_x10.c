#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char letter;

	while (i <= 9)
	{

	for (letter = 'a'; letter <= 'z'; letter++)
	{

	_putchar (letter);
	}

	_putchar ('\n');

	i++;
	}
}
