#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Function that allocates memory fo an array
 * @nmemb: Array elemet
 * @size: Memory size
 * Return: if memory allocation fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
