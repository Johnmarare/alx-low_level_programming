#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns number of elements in a doubly list
 * @h: head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next, count++)
	{
	}
	return (count);
}
