#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers
 * @a: First value to be swaped
 * @b: Second value to be swaped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp  = *a;
	*a = *b;
	*b = temp;
}
