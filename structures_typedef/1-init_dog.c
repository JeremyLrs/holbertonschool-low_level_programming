#include "dog.h"

/**
 * init_dog - function that initialize
 * a variable of type struct dog
 *
 * @d: is the pointer
 * @name: name of name
 * @age: name of age
 * @owner: name of owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
