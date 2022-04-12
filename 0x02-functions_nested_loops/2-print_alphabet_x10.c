#include "main.h"

/**
 * void print_alphabet_x10(void);
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;
	
	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
		_putchar('\n');
	}
}
