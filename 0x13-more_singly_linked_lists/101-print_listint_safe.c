#include "lists.h"
/**
 * print_listint_safe - prints a listint_t list
 * @head: pointer to the first node
 * Return: Length of list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t i, is_loop = 0;

	while (slow && fast && fast->next)
	{
		if (!(fast->next->next))
		{
			break;
		}
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = slow->next;
			is_loop = 1;
			break;
		}
	}
	if (!is_loop)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}
		return (i);
	}
	while (head)
	{
		if (head == slow)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}
	return (0);
}
