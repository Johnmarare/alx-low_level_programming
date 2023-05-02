#include "lists.h"
/**
 * reverse_listint - reverses list
 * @head: pointer to *head
 * Return: on success 0.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr;

	curr = *head;
	if (!curr->next)
	{
		head++;
	}
	return (0);
}
