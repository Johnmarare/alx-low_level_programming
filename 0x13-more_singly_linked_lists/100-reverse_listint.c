#include "lists.h"
/**
 * reverse_listint - reverses list
 * @head: pointer to *head
 * Return: on success 0.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}


	prev = NULL;
	current = *head;
	next = NULL;

	while (current->next != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
