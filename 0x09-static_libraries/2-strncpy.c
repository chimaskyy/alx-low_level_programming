#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: Destination to copy
 * @src: Source to copy
 * @n: Maximum number to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
