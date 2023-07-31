#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes at a given index
 * @head: Head pointer to the element to delet and the first element
 * @index: Index of the elements
 * Return: 1 if succesfull and -1 if it fails to delet
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *delNode;

	temp = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	/*check if the index to delet is at 0*/
	if (index == 0)
	{
		/*initialize the index to the address of head*/
		delNode = *head;
		*head = (*head)->next;
		free(delNode);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL || temp->next == NULL)
		{
			return (-1);
		}
	}
	delNode = temp->next;
	temp->next = delNode->next;
	free(delNod);
	return (1);
}
