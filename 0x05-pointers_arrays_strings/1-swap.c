#include "main.h"
/**
 * swap_int - swaps a value
 * @a: input parameter
 * @b: input parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
