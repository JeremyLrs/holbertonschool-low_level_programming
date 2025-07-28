#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 *
 *
 * Return: 0
 */

void jack_bauer(void);
{
	int hour;
	int min;
	int temp;

	for (hour = 0; hour < 24; hour++)  /* initialiser une boucle pour les heures de 0 à 23 */
	{
		for (min = 0; min < 60; min++) /* initialiser une boucle pour les minutes de 0 à 59 */
		{
			if (min < 10)
				_putchar('0');
				_putchar(hour);
			else if (hour > 9 && hour < 20)
				_putchar('1');
				_putchar(hour % 10);
			else (hour > 19)
				_putchar('2');
				_putchar(hour % 10);
		}
		if (hour < 24)
		{
			_putchar('%d');
			_putchar(hour % 10);
		}

	}
	return (0);
}
