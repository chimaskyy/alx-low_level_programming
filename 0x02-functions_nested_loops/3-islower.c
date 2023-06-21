#include "main.h"

/**
 * _islower - Entry point
 * Description: 'write function that checks for lowercase'
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}

