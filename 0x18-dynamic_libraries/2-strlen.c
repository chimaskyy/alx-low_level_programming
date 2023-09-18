#include "main.h"

/**
 * _strlen - Funtion that return the length of a string
 * @s: Stringe
 * Return: Length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
