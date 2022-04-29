#include <stdio.h>
#include "main.h"
/**
 * main - prints the numer of arguments passed into main
 * @argc: number of command line arguments
 * @argv; arrany name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc;)
	{
		counter++;
		(*argv)++;
	}
	printf("%d\n", counter - 1);
	return (0);
}
