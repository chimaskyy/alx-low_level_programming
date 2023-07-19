#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Write a function that searches for integer
 * @array: Array of element to check
 * @size: Size of the array
 * @cmp: Function pointer to tha array
 * Return: -1 if no element is an integer
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
