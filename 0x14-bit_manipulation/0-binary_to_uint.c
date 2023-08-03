#include "main.h"
/**
 * binary_to_uint - Function that converts binary to an unsigned int
 * @b: Pointer to the string to convert
 * Return: Converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	unsigned int power;
	int index;

	if (b == NULL)
		return (0);
	/* Iterate through the string*/
	for (index = 0; b[index]; index++)
	{
		/*check if any number at each index is not 1 0r 2*/
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	sum = 0;
	for (power = 1, index--; index >= 0; index--, power *= 2)
	{
		if (b[index] == '1')
			sum += power;
	}

	return (sum);
}

