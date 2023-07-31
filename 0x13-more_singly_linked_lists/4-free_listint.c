#include "lists.h"

/**
 * free_listint - Function that free memory allocated to a list
 * @head: Head of the list pointing to the first element
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *current;

	while (temp != NULL)
	{
		current = temp;
		temp = temp->next;
		free(current);
	}
}
