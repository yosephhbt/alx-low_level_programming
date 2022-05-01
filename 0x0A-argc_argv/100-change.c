#include <stdio.h>
#include <stdlib.h>
#include "main,h"
#include <ctype.h>
#include <stdbool.h>
/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if the number of arguments passed to the programs= is not exactly 1, otherwise return 0
 */
int main(int argc, char *argv[])
{
	int cents, coin;

	coin = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cent > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			coins += 1;
		}
	}
	printf("%d\n", coin);
	return (0);
}
