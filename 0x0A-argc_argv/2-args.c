#include <stdio.h>
#include "main.h"
/**
 * main - pritns all arguments passed into main
 * @argc: number of command line arguments
 * @argv: array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
