#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 * Print all the letters except q and e
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 *
 * Return: 0
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i == 'q' || i == 'e')
		{
			i++;
			continue;
		}
		else
		{
			putchar(i);

			i++;
		}
	}

	putchar('\n');
	return (0);
}
