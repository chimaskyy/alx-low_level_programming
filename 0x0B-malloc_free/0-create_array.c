#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creats an array of
 * chars initialized with a specific char
 * @size: size of array
 * @c: character to initialize
 * Return: A pointer or Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

