#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints all single digit numbers
 * of base 10 starting from 0, followed by a n * ew line.
 *
 *Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);

	printf("\n");

	return (0);
}
