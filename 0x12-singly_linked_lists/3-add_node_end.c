#include "lists.h"

/**
 * add_node_end - Function that adds new node at the end
 * of a linked list
 * @head: Pointer to the head of the list pointing to the first node
 * @str: String to duplicate into the new node
 * Return: Address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *currentNode;

	newNode = malloc(sizeof(list_t));
			if (newNode == NULL)
			return (NULL);
			/* Duplicate string into newNode */
			newNode->str = strdup(str);
			newNode->len = strlen(str);
			newNode->next = NULL;

			/*check if the first node is pointing to NULL address */
			if (*head == NULL)
			{
			*head = newNode;
			return (newNode);
			}
			/* initialize currentNode to head, to find last node */
			currentNode = *head;
			/*check if second node is NULL */
			while (currentNode->next != NULL)
			{
			currentNode = currentNode->next;
			}
			currentNode->next = newNode;
			return (newNode);

}
