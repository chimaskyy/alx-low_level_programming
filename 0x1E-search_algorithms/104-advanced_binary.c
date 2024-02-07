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
 * search - this fuction searches
 * for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element
 * of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * @lower_b: first index of array
 * @higher_b: last index of array
 * Return: -1 if element is not found or index of element found
 */

int search(int *array, size_t size, int value, size_t lower_b, size_t higher_b)
{
	size_t mid;

	if (lower_b > higher_b)
	{
		return (-1);
	}

	if (array == NULL)
	{
		return (-1);
	}
	mid = (lower_b + higher_b) / 2;
	printf("Searching in array: ");
	print_array(array, lower_b, higher_b);

	if (value > array[mid])
	{
		return (search(array, size, value, mid + 1, higher_b));
	}
	else if (value < array[mid])
	{
		return (search(array, size, value, lower_b, mid - 1));
	}
	else
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		return (search(array, size, value, lower_b, mid - 1));
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
 * Return: the value found
 */

int advanced_binary(int *array, size_t size, int value)
{
	return (search(array, size, value, 0, size - 1));
}
