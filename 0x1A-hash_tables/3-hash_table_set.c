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
	hash_node_t *new_node;

	if (key == NULL || ht == NULL || !value)
	{
		return (0);
	}
	idx = key_index((const unsigned char *) key, ht->size);
	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new_node;
	}
	else
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			ht->array[idx]->value = strdup(value);
		}
		else
		{
			new_node->next = ht->array[idx];
			ht->array[idx] = new_node;
		}

	}
	return (1);
}
