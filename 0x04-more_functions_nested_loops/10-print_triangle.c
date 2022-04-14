#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: input parameter
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;
	
	if (size >0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > 0; j--)
			{
				if (i > (j - 1))
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
