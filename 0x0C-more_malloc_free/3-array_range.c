#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creats array of integers
 * @min: Minimum length
 * @max: Maximum length
 * Return: Pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int required_size;
	int i;

	if (min > max)
		return (NULL);

	required_size = max - min + 1;

	array = malloc(required_size * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < required_size; i++)
		array[i] = min++;
	return (array);
}

