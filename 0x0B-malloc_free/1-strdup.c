#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - return a pointer to a newly allocated space in memory
 * @str: string to return
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *p = NULL;
	unsigned int m;
	unsigned int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (m = 0; str[m] != '\0'; m++)
	{
		size++;
	}
	p = (char *)malloc((size + 1) * sizeof(char));
	if (p != NULL)
	{
		for (m = 0; m < size; m++)
			p[m] = str[m];
	}
	else
	{
		p = NULL;
	}
	return (p);
}
