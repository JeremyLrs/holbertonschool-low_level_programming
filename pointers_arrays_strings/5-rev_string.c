/**
 * rev_string - function that reverses a string
 *
 * @s: is an integer
 *
 *Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp = s[j];

	for (j = 0; s[j] != '\0'; j++)
	{
	}
	for (i = 0; i < j / 2; i++)
	{
		temp = s[j - 1 - i];
		s[j - 1 - i] = s[i];
		s[i] = temp;
	}
}
