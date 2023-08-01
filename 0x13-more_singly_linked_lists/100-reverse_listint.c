#include "lists.h"

/**
 * reverse_listint - Function that reverse list of a linked list
 * @head: Head of the list pointing to the first node
 * Return: Pointer to the first node of reversed list
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *currentNode;

	temp = NULL;
	currentNode = NULL;

	while (*head != NULL)
	{
		currentNode = *head;
		*head = (*head)->next;
		currentNode->next = temp;
		temp = currentNode;
	}

	*head = currentNode;
	return (*head);
}
