#include "lists.h"

/**
 * listint_len - Function that retuns the number of element in a linked list
 * @h: Head of the list pointing to the first element
 * Return: Number of element
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp;
	
	temp = h;
	
	while (temp != 0)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
