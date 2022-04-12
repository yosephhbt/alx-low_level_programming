#include "main.h"
/**
 * _abs - a function that computes the absoulte value of an integer
 * @n: inpute parameter
 * Return: int
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
		return (n);
}
