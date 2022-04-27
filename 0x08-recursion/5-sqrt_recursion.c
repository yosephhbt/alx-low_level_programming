#include "main.h"
/**
 * _sqrt_recursion - evalutes 1 to n
 * @a: input
 * @b: number that iterates from 1 to n
 * Return: on success 1
 */
int _sqrt_recursion(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (_sqrt_recursion(a, b + 1));
}
