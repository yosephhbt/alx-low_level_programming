#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: input parameter
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;
	
	for (i = 0; i < size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (i > j)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

