#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: input 1
 * @n: input 2
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);
	printf("\n");
}
