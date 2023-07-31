#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all tha data of a list
 * @head: Head of the list pointing to the first element
 * Return: Sum of the elements
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	if (head == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		/* add the datas*/
		sum += temp->n;
		/*initialize temp to temp->next to transverse through the datas*/
		temp = temp->next;
	}
	return (sum);
}
