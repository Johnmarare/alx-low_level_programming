#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: genesis
 * @index: index of node
 * Return: head
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t idx;

	for (idx = 0; head != NULL; head = head->next, idx++)
	{
		if (idx == index)
		{
			return (head);
		}
	}

	return (NULL);
}
