#include "lists.h"

/**
 * print_dlistint - Function to print elemets of a doublylinked list
 * @h: Pointer to the head of list
 * Return: Number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	/*printf("\n");*/
	return (count);

}
