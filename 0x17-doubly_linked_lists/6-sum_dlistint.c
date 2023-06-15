#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - sum of data in a list
 * @head: genesis
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
	{
		sum = sum + head->n;
	}
	return (sum);
}
