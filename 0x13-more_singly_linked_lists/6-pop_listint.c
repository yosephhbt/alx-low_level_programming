#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delets the head node of a listint_t linked list
 * @head: pointer to head of list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *tmp2;
	int n;


	if (head == 0 || tmp == 0)
		return (0);
	tmp2 = tmp->next;
	n = tmp->n;
	free(tmp);
	*head = tmp2;

	return (n);
}
