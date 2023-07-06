#include "main.h"

int helper(int n, int x);
/**
 * _sqrt_recursion - Calculate the Natural square root of a number
 * @n: Number to calulate its square root
 * Return: Square root of n if it is anatural number, else -1
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	return (helper(n, 0));
}

/**
 * helper - Recurses to find Natural square root of a number
 * @n: Number to calculate its square root
 * @x: Iterator
 * Return: -1 if n not a natural square root
 */

int helper(int n, int x)
{

	if (x * x > n)

		return (-1);

	if (x * x == n)

		return (x);


	return (helper(n, x + 1));
}
