#include "lists.h"
/**
 * free_list - free lists
 * @head: head of list
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
