#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 *
 * @d: it's a dog
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", d->age);

		if (d->name != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("owner: (nil)\n");
	}
}
