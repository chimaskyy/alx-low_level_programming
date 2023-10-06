#include "hash_tables.h"

/**
 * *hash_table_create - creates a hash table
 * @size: size of the array/element to add
 * Return: pointer to thr new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	/*Allocate memory for the table and check if mallocing failed*/
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{

		return (NULL);
	}
	/*Allocate memory to hold the hash nodes(elements)*/
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}


	for (i = 0; i < size; i++)
	{
		/*initialize all element of table to Null*/
		table->array[i] = NULL;
	}
	return (table);

}
