#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: Passed number
 * @index: Index to check
 * Return: Value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int store;

	if (index > 64)
		return (-1);

	store = n >> index;

	return (store & 1);
}

