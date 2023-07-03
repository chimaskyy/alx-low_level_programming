#include "main.h"

/**
 * _memcpy - Function to copy memory area
 * @dest: Destination to copy to
 * @src: Source to copy from
 * @n: Number of times to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return dest;
}
