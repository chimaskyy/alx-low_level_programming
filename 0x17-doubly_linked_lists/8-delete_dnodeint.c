#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at an idex
 * @head: Pointer to head of the list
 * @index: Index to delete
 * Return: 1 on success or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
		while (i < index && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
			return (-1);

		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
		free(temp);

		return (1);
	}
