#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: input parameter
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;
	
	for (i = 1; i < size; i++)
	{
		for (j = size; j > 1; j--)
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

