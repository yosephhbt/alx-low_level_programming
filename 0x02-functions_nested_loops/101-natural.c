#include <stdio.h>
/**
 * main - entry point
 *
 * Return: int
 */
int main(void)
{
	int n, sum;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
		sum += n;
		}
	}
	printf("%d", sum)
	return (0);
}
