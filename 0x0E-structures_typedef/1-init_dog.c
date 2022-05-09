#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - program that initializes certain variables
 * @d: struct for initializing
 * @name: holds name char array
 * @age: holds age float
 * @owner: holds owner name
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
