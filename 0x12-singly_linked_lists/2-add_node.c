#include "lists.h"
/**
 * add_node - adds a node
 * @head: pointer to pointer of list
 * @str: mlloced string
 * Return: *head;
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	unsigned int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	first = malloc(sizeof(list_t));
	if (!first)
	{
		return (NULL);
	}
	first->str = strdup(str);
	first->len = len;
	first->next = (*head);
	(*head) = first;

	return (*head);
}
