#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at index
 * @head: points to first node
 * @idx: index
 * @n: data
 * Return: new_node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	/*insert at beginning*/

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	current = *head;

	while (idx > 1)
	{
		current = current->next;
		idx--;
		/*check if idex is out of bounds*/
		if (!current)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
