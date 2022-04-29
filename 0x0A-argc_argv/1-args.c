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
	printf(argc - 1);
	return (0);
}
