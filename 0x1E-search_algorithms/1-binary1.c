#include <stdio.h>

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
int search(int *array, size_t size, int value, size_t lower_b, size_t higher_b)
{
	lower_b = 0;
	sizhigher_b = size - 1;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (lower_b <= higher_b)
	{
		mid = (lower_b + higher_b) / 2;
		printf("Searching in array: ");
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
