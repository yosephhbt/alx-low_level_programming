#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: input 1
 * @src: input 2
 * @n: input n
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, co;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (co = 0; co < n; co++)
	{
		dest[i + co] = src[co];
		if (src[co] == '\0')
			co = n;
	}
	return (dest);
}
