#include "main.h"
/**
 * print_numbers - function that prints the number from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
