#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node at an index
 * @h: Head pointer to the list
 * @idx: Index to insert node
 * @n: node to insert
 * Return: newnode
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *temp = *h;
	dlistint_t *current = NULL;
	unsigned int i;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *h;
		if (*h != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}

	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (i != idx - 1)
	{
		free(newnode);
		return (NULL);
	}
	current = temp->next;
	temp->next = newnode;
	newnode->prev = temp;
	newnode->next = current;
	if (current != NULL)
		current->prev = newnode;

	return (newnode);


}
