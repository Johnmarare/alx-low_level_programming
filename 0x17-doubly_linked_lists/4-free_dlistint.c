#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free list
 * @head: The genesis
 * Return: to void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *space;

	for (; head != NULL;)
	{
		space = head->next;
		free((void *)head);
		head = space;
	}
}
