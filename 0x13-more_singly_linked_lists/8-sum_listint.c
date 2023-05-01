#include "lists.h"
/**
 * sum_listint - returns sum of of elements
 * @head: head
 * Return:  sum
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	current = head;

	sum = 0;
	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
