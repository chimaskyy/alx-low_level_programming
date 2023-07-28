#include "lists.h"

/**
 * print_list - Function that prints the elemet of a list
 * @h: head of the list pointing to the first element/node
 * Return: The number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;
	const list_t *temp = h;
	
	while (temp != NULL)
	{
		if(temp->str == NULL)
			printf("[%d] (nil)\n", temp->len);
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		len++;
	}
	return (len);
}
