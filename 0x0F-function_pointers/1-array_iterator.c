#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - Function that executes a function given
 * as a parametr on each element of array
 * @size: Size of the array
 * @action: Function pointer
 * @array: Element of array pointed to
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
