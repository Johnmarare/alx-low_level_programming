#include "lists.h"
/**
 * reverse_listint - reverses list
 * @head: pointer to *head
 * Return: on success 0.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}


	prev = NULL;

	while ((*head)->next != NULL)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	(*head)->next = prev;

	return (*head);
}
