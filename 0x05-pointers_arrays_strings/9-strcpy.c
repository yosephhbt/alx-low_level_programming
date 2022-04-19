#include <stdio.h>
#include "main.h"
/**
 * *_strcpy - copies string to buffer both arguments
 * @dest:input 1
 * @src:input 2
 * Return: pointr to the buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
