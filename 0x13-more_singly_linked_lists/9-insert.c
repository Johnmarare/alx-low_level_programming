#include "lists.h"


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head  = new;
		return (*head);
	}


	current = *head;
	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (!current)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;

	return (new);
}
