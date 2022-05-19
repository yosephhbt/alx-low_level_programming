#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the number of elemets in a linked list_t list
 * @h: pointer to head of singly linked list
 * Return: Number of elements in list
 */
size_t list_len(const list_t *h)
{
	unsigned int size = 0;


	while (h != 0)
		h = h->next, size++;
	return (size);
}
