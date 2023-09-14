#include "lists.h"

/**
 * get_dnodeint_at_index - Return nth node of a list
 * @head: Pointer to head of list
 * @index: Idex of node starting at 0
 * Return: Node at nth
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	/*check if index is out of range*/
	if (i != index)
		return (NULL);
	return (head);


}
