#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - Sum of two integers
 * @a: First integer
 * @b: Second intger
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference between two integers
 * @a: First integer
 * @b: Second intger
 * Return: Difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product of two integers
 * @a: First integer
 * @b: Second intger
 * Return: Product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division of two integers
 * @a: First integer
 * @b: Second intger
 * Return: Division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulo of two integers
 * @a: First integer
 * @b: Second intger
 * Return:Remainder of division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
