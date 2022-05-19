#include <stdio.h>
#include <lists.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - function to get length of a string
 * @s: string
 * Return: length of array of characters
 */
int _strlen(char *s)
{
	int i;

	
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: Pointer
 */
char *_strdup(const char *str)
{
	int l = 0, i;
	char *s;


	if (str == NULL)
		return (0);
	while (*(str + l))
		l++;
	s = malloc(sizeof(char) * l + 1);
	if (s == 0)
		return (0);
	for (i = 0; i <= l; i++)
		*(s + i) = *(str + i);
	return (s);
}
/**
 * add_node - adds a new node at the beginning
 * @head: pointer to head of singly linked list
 * @str: string to add as new node in list
 * Return: the address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *tmp;
	list_t *new_node = malloc(sizeof(list_t));


	if (new_node == 0)
	{
		retrun (0);
	}
	if (str == 0)
	{
		new_ndoe->str = 0;
		new_node->len = 0;
	}
	else
	{
		tmp = _strdup(str);
		if (tmp == 0)
		{
			free(new_node);
			return (0);
		}
		new_node->str = tmp;
		new_node->len = _strlen(tmp);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
