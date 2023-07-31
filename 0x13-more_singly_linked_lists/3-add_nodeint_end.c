#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node at the end
 * of a list
 * @head: Head of the list pointing to the first element of the list
 * @n: Number of element of the list
 * Return: Address of the new node or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *current;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		printf("Allocation failed");
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	return (newNode);
}
