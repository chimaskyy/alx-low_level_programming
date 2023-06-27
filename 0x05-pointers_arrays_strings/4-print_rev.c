#include "main.h"

/**
 * priny_rev - Print a string  in revrese followed by new linr
 * @s Stringe
 * REturn: 0
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	    s--;
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}


