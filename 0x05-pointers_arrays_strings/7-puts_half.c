#include "main.h"

/**
 * puts_half - Print half of a string
 * @str: Input string
 */

void puts_half(char *str)
{
	int fullstr;
	int halfstr;

	fullstr = 0;

	while (str[fullstr] != '\0')
		fullstr++;

	halfstr = fullstr / 2;

	if (fullstr % 2 == 1)
		halfstr++;

	while  (halfstr < fullstr)
	{
		_putchar(str[halfstr]);
		halfstr++;
	}
	_putchar('\n');
}



