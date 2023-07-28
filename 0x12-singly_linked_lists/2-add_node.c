#include "lists.h"

/**
 * add_node - Function that adds new node at the
 * beginning of a linked list
 * @head: Pointer to the head of list
 * @str: String to duplicate to the new node
 * Return: Address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;

	*head = newNode;
	return (newNode);

}
