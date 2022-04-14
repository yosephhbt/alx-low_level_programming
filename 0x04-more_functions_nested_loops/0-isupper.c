#include "main.h"
/**
 * isupper - checks for uppercase character
 * @c: input parameter
 * Return: 1 if c is uppercas, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
