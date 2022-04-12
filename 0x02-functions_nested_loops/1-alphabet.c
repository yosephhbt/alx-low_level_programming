#include "main.h"

/**
 * print_alphabet - prints alphabte in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
