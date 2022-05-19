#include "lists.h"
/**
 * free_list - frees a list
 * @head: points to hte begining of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *phree;


	while (head)
	{
		phree = head;
		head = head->next;
		free(phree->str);
		free(phree);
	}
}
