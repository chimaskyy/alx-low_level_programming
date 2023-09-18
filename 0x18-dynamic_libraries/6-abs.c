#include "main.h"

/**
 * _abs - Compute absolute value of an integer
 * @x: Number to compute
 * Return: 0 or absolute value
 */

int _abs(int x)
{
	if (x < 0)
	{
		int abs_val;

		abs_val = x * -1;
		return (abs_val);
	}
	return (x);
}
