#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts anew node at a given position
 * @h: points to head of the list
 * @idx: index of list
 * @n: data
 * Return: new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int index;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	current = *h;
	if (idx == 0)
	{
		new_node->next = current;
		new_node->prev = NULL;
		if (current != NULL)
		{
			current->prev = new_node;
			*h = new_node;
		}
		return (new_node);
	}
	for (index = 0; index < idx - 1 && current != NULL; index++)
	{
		current = current->next;
	}
	if (current == NULL && index < idx - 1)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;
	return (new_node);
}
