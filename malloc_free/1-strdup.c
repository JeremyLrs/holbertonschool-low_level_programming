#include "main.h"

/**
 * *_strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string
 * given as a parameter.
 *
 * @str:
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0;
	char *duplicate_string;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	duplicate_string = malloc(i + 1);

	if (duplicate_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		duplicate_string[i] = str[i];
	}
	duplicate_string[i] = '\0';

	return (duplicate_string);

}
