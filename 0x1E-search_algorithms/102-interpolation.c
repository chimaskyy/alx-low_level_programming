#include "search_algos.h"

/**
 * interpolation_search - this function searches for a value in an
 * @array using interpolation algorithms
 * @array: array to search
 * @size: size of array
 * @value: the value to search for
 * Return: index of the value found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);
	while (value >= array[low] && value <= array[high] && low <= high)
	{
		/*Calculate the position(mid) using interpolation formula*/
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		/*Adjust low and high for the next iteration if pos is not value*/
		if (value < array[pos])
			high = pos - 1;
		else if (value > array[pos])
			low = pos + 1;
		else
			return (pos);
	}
	if (value == array[low])
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		return (low);
	}
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
