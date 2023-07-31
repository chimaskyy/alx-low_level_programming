#include "lists.h"

/**
 * pop_listint - Funtion that deletes the head node of a linked list
 * @head: Head of the list pointing to the first element
 * Return: Head node's data
 */


int pop_listint(listint_t **head)
{
	listint_t *temp;
	int del = 0;

	if (*head == NULL)
	{
		return (del);
	}
	
	temp = *head;
	del = temp->n;
	*head = (*head)->next;
	free(temp);

	return (del);
}

