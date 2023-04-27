#include "lists.h"
/**
 * list_len - elements in a linked list
 * @h: linked list
 * Return: number of elements in @h
 */

size_t list_len(const list_t *h)
{
	size_t s;

	s = 0;
	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
