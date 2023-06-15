#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - adds node at the begining of a list.
 * @head: pointer to first node
 * @n: data
 * Return: new_node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->prev = NULL;
	new_node->next = *head;
	new_node->n = n;

	if (*head)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
