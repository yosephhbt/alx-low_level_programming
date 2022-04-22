#include "main.h"
/**
 * reverse_array - a function that reverses the content
 * @a: content
 * @n: elements of content
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
