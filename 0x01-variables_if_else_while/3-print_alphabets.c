#include <stdio.h>

/**
 *  main - entry point
 * Description: Prints the alphabetic in lower and upper case
 * 
 * Return: 0
 * */
int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
