#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints elements of a listint_t list
 * @h: head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t index;

	temp = h;
	index = 0;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		index++;
	}
	return (index);
}
