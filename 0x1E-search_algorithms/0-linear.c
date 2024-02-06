#include "search_algos.h"

/**
 * linear_search - this function searches for
 * a value in an array of integers using the
 * Linear search algorithm
 * @array: pointer to the first element
 * of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: -1 if array is null or value absent
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}

/*int findmatch(int *array, int size)
{
	int i;
	for (i = 1; i < size; i++)
	{
		if (array[i] == i)
		{
			return array[i];
		}
	}
	return -1;
}*/
