#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: First number
 * @m: Second number
 * Return: Number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	int count;

	flip = n ^ m;
	count = 0;

	while (flip)
	{
		count++;
		flip &= (flip - 1);
	}

	return (count);
}
