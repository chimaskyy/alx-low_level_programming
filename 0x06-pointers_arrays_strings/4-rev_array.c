#include "main.h"

/**
 * reverse_array - reverse content of a sting
 * @a: Array of string
 * @n: Number of element to reverse
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
