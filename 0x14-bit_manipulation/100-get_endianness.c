#include "main.h"
/**
 * get_endianness - checks the endianness
 * void: no argument
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
