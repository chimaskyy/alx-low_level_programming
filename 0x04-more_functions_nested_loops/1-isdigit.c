#include "main.h"

/**
 * _isdigit - Check for a digit
 * @c: Number to input
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
