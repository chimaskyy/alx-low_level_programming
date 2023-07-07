#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @s: Sting to search
 * @c: Character to locate
 * Return: A pointer to the first occurrence if c is found
 * NULL if the c is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
