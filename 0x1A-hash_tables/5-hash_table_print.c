#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: the hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr_item;
	int first_print = 0;

	if (ht == NULL)
		return;


	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			curr_item = ht->array[i];

			while (curr_item != NULL)
			{
				if (first_print == 1)
					printf(", ");

				printf("'%s' : '%s'", curr_item->key, curr_item->value);
				first_print = 1;
				curr_item = curr_item->next;
			}
		}
	}
		printf("}\n");
}
