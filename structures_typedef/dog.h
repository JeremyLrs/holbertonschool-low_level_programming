#include <stdio.h>
#include <stdlib.h>
#ifndef DOG_H
#define DOH_H

/**
 * struct dog - Is struct for dog information
 *
 * @name: anme of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: void
 */

 struct dog
 {
    char *name;
    float age;
    char *owner;
 };

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif