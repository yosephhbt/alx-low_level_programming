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
	unsigned int i;


	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
