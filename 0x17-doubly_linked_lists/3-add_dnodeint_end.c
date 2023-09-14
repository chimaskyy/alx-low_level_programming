#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of list
 * @head: Pointer to head of the list
 * @n: node to add
 * Return: new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
		temp->next = newnode;
		newnode->prev =temp;
	

	return newnode;

}
