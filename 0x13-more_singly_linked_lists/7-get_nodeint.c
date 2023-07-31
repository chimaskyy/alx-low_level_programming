#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a list
 * @head: Head of the node pointing to the first element
 * @index: Index of the node
 * Return: NULL if nth node does nor exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int j = 0;

	temp = head;

	/* j iterates through the nodes*/
	while (temp != NULL && j < index)
	{
		temp = temp->next;
		j++;

	}

	if (temp != NULL && j == index)
	{
		return (temp);
	}
	else
		return (NULL);
}
