#include "main.h"
/**
 * sqrt2 - evalutes 1 to n
 * @a: input
 * @b: number that iterates from 1 to n
 * Return: on success 1
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - return square root of n
 * @n: Number integer
 * Retrun: on success 1
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
