#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - writes the character c to stdout
 * @name: String
 * @f: pointer to function with char
 * Return: Noting
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		if (name != NULL)
		{
			(*f)(name);
		}
	}
}
