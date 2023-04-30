#include "lists.h"
/**
 * pop_listint - deletes first position(head)
 * @head: pointer to first node pointer
 * Return: 0 when list is empty
 *	   data inside deleted elements
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int position;

	temp = *head;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	else
	{
		position = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (position);
}
