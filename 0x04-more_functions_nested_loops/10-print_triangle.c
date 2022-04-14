#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: input parameter
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;
	
	for (i = 0; i < n; i++)
	{
		for (j = n; j > 0; j--)
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

