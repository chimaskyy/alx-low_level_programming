#include "lists.h"

/**
 * free_listint2 - Function that free memory allocated to a list
 * and setting the head to null
 * @head: Head of the list pointer to the first element
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;

	temp = *head;

	while (temp != NULL)
	{
		current = temp->next;
		free(temp);
		temp = current;
	}
	*head = NULL;
}
