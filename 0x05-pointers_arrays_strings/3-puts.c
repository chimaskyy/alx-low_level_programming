#include "main.h"

/**
 * _puts - Function that prinys a string followed by a new lime
 * @str: string to print
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
