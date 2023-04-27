#include "lists.h"
/**
 * add_node_end - add node at end of list
 * @head: node start
 * @str: malloced string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new;
	unsigned int len;

	len = 0;

	while (str[len])
	{
		len++;
	}
	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
