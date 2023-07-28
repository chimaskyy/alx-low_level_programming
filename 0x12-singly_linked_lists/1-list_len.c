#include "lists.h"

/**
 * list_len - Function that returns the nuber of elements
 * @h: Head of the list
 * Return: Number of element
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t len = 0;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
