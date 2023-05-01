#include "lists.h"
#include <assert.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of the node
 * @index: nth node
 * Return: nth node of a list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current;

	current = head;

	count = 0;
	while (current != NULL)
	{
		if (count == index)
		{
			return (current->next);
		}
		count++;
		current = current->next;
	}
	return (0);
}
