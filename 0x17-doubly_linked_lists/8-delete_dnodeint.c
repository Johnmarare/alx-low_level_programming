#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at a gven index
 * @head: points to adress of first nde
 * @index: node to be deleted
 * Return: on success 1, on failure -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	current = *head;
	/*delete the first node*/
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	/*Traverse list to find deletion point*/
	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	current->prev->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
