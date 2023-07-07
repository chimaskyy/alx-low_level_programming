#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: Memory to fill
 * @b: Character to copy
 * @n: Number of time to copy
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
