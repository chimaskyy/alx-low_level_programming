#include "main.h"

/**
 * string_toupper - Change lowercase to uppercase
 * @up: Character string
 * Return: Up
 */

char *string_toupper(char *up)
{
	int a;

	a = 0;

	while (up[a] != '\0')
	{
		if (up[a] >= 'a' && up[a] <= 'z')
		{
			up[a] = up[a] - ('a' - 'A');
		}
		a++;
	}
	return (up);
}
