#include "main.h"
/**
 * *str_concat - function that
 * concatenates two strings.
 *
 * @s1: aaa
 * @s2: bbb
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *concatenates;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	concatenates = malloc(i + j + 1);
	if (concatenates == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concatenates[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		concatenates[i + j] = s2[j];
	concatenates[i + j] = '\0';
	return (concatenates);
}
