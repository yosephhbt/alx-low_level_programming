#include "lists.h"
#include <stdio.h>
/**
 * before_main - prints a specific message
 * 
 * Return: no return
 */
void __attribute__((constructor)) before_main()
{
	printf("You\'re beat! and yet, you must allow,");
	printf("\nI bore my house upon my brack!\n");
}
