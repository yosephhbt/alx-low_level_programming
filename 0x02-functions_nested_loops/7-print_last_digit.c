#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: ineger input
 * Return: returns the value of the last digit
 */
int print_last_digit(int n)
{
	int i;

	i = (n % 10);
	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
