#include "lists.h"


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev = NULL;
	unsigned int i;
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	temp = *head;
	
	i = 0;
	while (i < index - 1)
	{
		if ((temp == NULL) || (temp->next == NULL))
		{
			return (-1);
		}
		temp = temp->next;
		i++;
	}
	prev = temp->next;
	temp->next = prev->next;
	free(prev);
	return (1);
}
