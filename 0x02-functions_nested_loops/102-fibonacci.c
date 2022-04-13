#include <stdio.h>
/**
 * main - entry point
 *
 * Return: void
 */
int main(void)
{
	unsigned long i, num1, num2, temp;
	
	num1 = 0;
	num2 = 1;
	for (i = 0; i < 50; i++)
	{
		temp = num1 + num2;
		num1 = num2;
		num2 = temp;
		printf("%lu", temp);
		if (i == 49)
			putchar('\n');
		else
			printf(", ");
	}
	return (0);
}
