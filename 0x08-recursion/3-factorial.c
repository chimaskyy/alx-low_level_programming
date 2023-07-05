#include "main.h"

/**
 * factorial - Factorial of a given number
 * @n: Number
 * Return: -1 if n is lower than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
