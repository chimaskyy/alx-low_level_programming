#include "hash_tables.h"

/**
 * key_index - give the index of a key
 * @key: Key to find its index
 * @size: size of the hash table
 * Return: index the key/value pair should be stored in the table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ascii_value;
	unsigned long int index;

	ascii_value = hash_djb2(key);

	index = ascii_value % size;

	return (index);
}
