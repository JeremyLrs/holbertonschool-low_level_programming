#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - is a main function for basic operations
 *
 * @argc: is an argument count
 * @argv: is an argument value
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	unsigned int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 && (strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0))
	{
		printf("Error\n");
		return (100);
	}
	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);

	return (0);
}
