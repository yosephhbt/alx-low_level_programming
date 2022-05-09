#include <Stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strlen - a function that gets a length of string
 * @str: the string to get the length
 * Return: lenght of @str
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * _strcopy - a function that returns @dest with a copy iof a string from @src
 * @src: string to copy
 * Return: @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Reutn: struct pointer dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = NULL;
	char *newName, *newOwner;
	int newNameLen, newOwnerLen;


	if (name == NULL || owner == NULL)
		return (NULL);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newNameLen = _strlen(name);
	newName = malloc(sizeof(char *) * (newNameLen + 1));

	if (newName == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newOwnerLen = _strlen(owner);
	newOwner = malloc(sizeof(char *) * (newOwnerLen + 1));
	if (newOwner == NULL)
	{
		free(newName);
		free(newDog);
		return (NULL);
	}
	newDog->name = _strcpy(newName, name);
	newDog->age = age;
	newDog->owner = _strcpy(newOwner, owner);
	return (newDog);
}
