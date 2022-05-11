#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array of type int
 * @size: size of array
 * @action: function with argument int and no return
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
		while (size--)
			action(*(array++));
}
