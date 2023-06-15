#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - add node at th end of list
 * @head: points to head
 * @n: list data
 * Return: new_node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *prev;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	for (prev = NULL; *head != NULL; head = &(*head)->next)
	{
		prev = *head;
	}
	new_node->prev = prev;
	new_node->next = NULL;
	new_node->n = n;
	*head = new_node;

	return (new_node);
}
