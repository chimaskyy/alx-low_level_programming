#include "search_algos.h"

/**
 * print_array - this prints all element of an array
 * @array: array to print it's element
 * @first: first element in array
 * @last: last element in array
 */

void print_array(int *array, size_t first, size_t last)
{
	size_t i;

	for (i = first; i <= last; i++)
	{
		if (i != last)
		{
			printf("%d, ", array[i]);
		}
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - this fuction searches
 * for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element
 * of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if element is not found or index of element found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t lower_b = 0;
	size_t higher_b = size - 1;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (lower_b <= higher_b)
	{
		mid = (lower_b + higher_b) / 2;
		printf("Serching in array: ");
		print_array(array, lower_b, higher_b);

		if (value > array[mid])
		{
			lower_b = mid + 1;
		}
		else if (value < array[mid])
		{
			higher_b = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
