#include "lists.h"


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}

	temp = *head;

	while(idx > 1)
	{
		temp = temp->next;
		idx--;
		if (temp != NULL)
		{
			free(new);
			return (NULL);
		}
	}
	 new->next = temp->next;
	 temp->next = new;

	 return (new);
}
