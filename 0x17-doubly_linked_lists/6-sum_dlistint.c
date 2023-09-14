#include "lists.h"

/**
 * sum_dlistint - Sum all data in linked list
 * @head: Pointer to head of the list
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
