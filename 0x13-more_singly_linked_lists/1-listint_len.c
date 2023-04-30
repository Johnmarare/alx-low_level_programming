#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t index;

	temp = h;
	index = 0;

	while (temp)
	{
		temp = temp->next;
		index++;
	}
	return (index);
}
