#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Function that reallocates memory block
 * using malloc and free
 * @ptr: allocated memory
 * @old_size: size allocated in byte
 * @new_size: new size allocated in byte
 * Return: Null or pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr1 = malloc(new_size);

	if (ptr1 == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL)
	{
		n = (new_size < old_size) ? new_size : old_size;
		memcpy(ptr1, ptr, n);
	}

	free(ptr);
	return (ptr1);


}
