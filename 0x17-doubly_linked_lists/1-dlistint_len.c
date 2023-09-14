#include "lists.h"

/**
 * dlistint_len - Function to return the number of elemet in list
 * @h: Pointer to the head of the list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
