#include "lists.h"

/**
 * print_listint - Function that prints all the element of a list
 * @h: Head of the list pointing to the first element
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int count;


	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
