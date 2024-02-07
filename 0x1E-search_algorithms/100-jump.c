#include "search_algos.h"

/**
 * jump_search - searches for an element using jump
 * @search algorithms
 * @array: array of elemet to search
 * @size: size of the array
 * @value: element to search for
 * Return: first index where array is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t i;
	/*get the square root of the array size - 1*/
	size_t jump = sqrt(size - 1);

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size && array[i] < value; i += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		low = i;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", low, i);
	for (i = low; i < size && array[i] <= value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
