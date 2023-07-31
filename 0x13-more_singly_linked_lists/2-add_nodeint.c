#include "lists.h"
/**
 * add_nodeint - Function that adds a new node at the
 * beginning of a linked list
 * @head: Head of the list pointing to the first node
 * @n: Number of element printed
 * Return: Address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		printf("Allocation failed");
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);

}
