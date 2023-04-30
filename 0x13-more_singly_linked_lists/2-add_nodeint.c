#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head: points to the pointer that points to head
 * @n: element value
 * Return: ADDRESS of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeA;

	nodeA = malloc(sizeof(listint_t));
	if (nodeA == NULL)
	{
		return (NULL);
	}
	nodeA->n = n;
	nodeA->next = (*head);
	(*head) = nodeA;

	return (*head);
}
