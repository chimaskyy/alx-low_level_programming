#include "main.h"

/**
 * _strlen_recursion - Return the length of a string
 * @s: Sting to count
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
