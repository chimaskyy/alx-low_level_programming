#include "main.h"

/**
 * _strpbrk - Search a string for any set of bytes
 * @s: String to search
 * @accept: Prefix string
 * Return: Pointer to byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
