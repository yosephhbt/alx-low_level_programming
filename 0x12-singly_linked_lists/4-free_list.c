#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_list - frees a list
 * @head: points to hte begining of list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == 0)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
