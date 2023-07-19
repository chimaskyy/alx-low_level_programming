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
	int i;
	int num, num1;

	if (array != NULL && cmp != NULL)
	{

		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			num = cmp(array[i]);
			if (num == 1)
			{
				num1 = i;
				return (num1);
			}
		}
	}
	return (-1);
}
