#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 *
 * Return: 0
 */


int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar (alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
