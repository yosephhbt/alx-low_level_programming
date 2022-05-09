#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - function that frees memory created in 4-newdog.c
 * @d: input struct
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
