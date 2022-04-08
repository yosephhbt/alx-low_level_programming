#include <stdio.h>

/**
 * main: entry point
 *
 * Description: prints lowercase alphabet in revers
 * Retrun: 0
 */
int main(void)
{
	char c;
	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n')
	return (0);
}
