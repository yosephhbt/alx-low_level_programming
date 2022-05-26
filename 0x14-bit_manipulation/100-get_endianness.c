#include "main.h"
#include <math.h>
#include <stdio.h>
/**
 * get_endianness - checks the endianness
 * Prototype: int get_endianness(void)
 * Return: 0 if big, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1, endian;
	char *c = (char *)&n;

	
	if (*c)
		endian = 1;
	else
		endian = 0;
	return (endian);
}
