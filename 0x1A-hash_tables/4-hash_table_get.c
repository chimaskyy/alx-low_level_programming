#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: Hash table to look into
 * @key: the key to retrieve it's value
 * Return: The value associated with the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *curr_node;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	idx = key_index((const unsigned char *) key, ht->size);

	curr_node = ht->array[idx];

	while (curr_node != NULL)
	{
		if (strcmp(key, curr_node->key) == 0)
		{
			return (curr_node->value);
		}
		curr_node = curr_node->next;
	}
	return (NULL);

}
