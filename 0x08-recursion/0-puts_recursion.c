#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new lin
 * @s: String to print
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{

		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');


}

