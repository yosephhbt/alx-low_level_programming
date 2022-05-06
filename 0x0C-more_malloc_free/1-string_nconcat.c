#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 * Return: a pointer to newly allocated space in memmory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1Len, s2Len, i, j;
	char *conStr;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1Len = s2Len = 0;
	while (s1[s1Len] != '\0')
		s1Len++;
	while (s2[s2Len] != '\0')
		s2Len++;
	if (n >= s2Len)
		n = s2Len;
	conStr = (char *)malloc((s1Len + n + 1) * sizeof(char));
	if (conStr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		conStr[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		conStr[i] = s2[j];
		i++;
	}
	conStr[i] = '\0';
	return (conStr);
}

