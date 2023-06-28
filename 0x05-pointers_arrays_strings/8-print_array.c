#include "main.h"

/**
 * print_array - Print n elements of an array of integers
 * @a: Integer pointer
 * @n:number of element
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);


		if (index != (n - 1))
		{
			printf(", ");
		}
	}
		printf("\n");
}
