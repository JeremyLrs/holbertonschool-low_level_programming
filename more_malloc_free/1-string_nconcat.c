#include "main.h"
/**
 * string_nconcat - function that concatenates
 * two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	result = malloc(len1 + n + 1);

	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < n; j++)
		result[len1 + j] = s2[j];
	result[len1 + n] = '\0';
	return (result);
}
