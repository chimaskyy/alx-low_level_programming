#include "lists.h"

/**
 * *insert_nodeint_at_index - Function that inserts a node
 * at a given position
 * @head: Head of the list pointing to the first element
 * @idx: Index to add the new node
 * @n: node value
 * Return: Address of the new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *temp;
	unsigned int i;

	temp = *head;
	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		printf("Allocation failed");
		return (NULL);
	}
	newNode->n = n;

	/* check if head is pointing to a null address 0r position is 0*/
	if (*head == NULL || idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	else
	{

		/* i is used to iterate through the idex of the elements */
		for (i = 0; temp != NULL && i < idx - 1; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);

		newNode->next = temp->next;
		temp->next = newNode;
	}

	return (newNode);

}
