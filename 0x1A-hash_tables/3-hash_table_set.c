#include "hash_tables.h"
/**
 * hash_table_set - adds element to hash table
 * @ht: hash table to add element to
 * @key: key to add
 * @value: Value associated to the key
 * Return: 1 on success and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_item, *curr_node;

	if (key == NULL || strlen(key) == 0 || ht == NULL
			|| ht->size == 0 || ht->array == NULL)
	{
		return (0);
	}
	new_item = malloc(sizeof(hash_node_t));

	if (new_item == NULL)
		return (0);
	idx = key_index((const unsigned char *) key, ht->size);
	new_item->key = strdup(key);
	new_item->value = strdup(value);
	new_item->next = NULL;
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new_item;
	}
	else
	{
		curr_node = ht->array[idx];
		while (curr_node != NULL)
		{
			if (strcmp(curr_node->key, new_item->key) == 0)
			{
				free(curr_node->value);
				curr_node->value = strdup(value);
				if (curr_node->value == NULL)
					return (0);
				return (1);
			}
			curr_node = curr_node->next;
		}
		new_item->next = ht->array[idx];
		ht->array[idx] = new_item;
	}
	return (1);
}
