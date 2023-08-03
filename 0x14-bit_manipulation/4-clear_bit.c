#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: Number passed
 * @index: Index to check
 * Return: 1 if succesfull or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = 1;


	if (index > 64)
		return (-1);

	/*bitmask =1 = 00000000000000000000000000000001*/
	bitmask <<= index;
	(*n) = (*n) & ~(bitmask);
	return (1);
}
