#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to head
 * @n: element value
 * Return: node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodeA;
	listint_t *temp;

	nodeA = malloc(sizeof(listint_t));
	if (nodeA == NULL)
	{
		return (NULL);
	}
	nodeA->n = n;
	if (*head == NULL)
	{
		*head = nodeA;
		return (nodeA);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = nodeA;
	return (nodeA);
}
