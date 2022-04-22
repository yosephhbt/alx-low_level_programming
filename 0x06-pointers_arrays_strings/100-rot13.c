#include "main.h"
#include <stdio.h>
/**
 * rot13 - encode usong rot13
 * @s: input string
 * Return: char
 */
char *rot13(char *s)
{
	int i = 0, i2 = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != 0)
	{
		for (i2 = 0; i2 <= 52; i2++)
		{
			if (*(s + i) == alpha[i2])
			{
				*(s + i) = alpha
[2];
				break;
			}
		}
		i++;
	}
	return (s);
}
