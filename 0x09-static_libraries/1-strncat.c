#include "main.h"

/**
 * _strncat - Concatenate two strings with n bytes from src
 * @src: Source to concatenate
 * @dest: Destination to concatenate
 * @n: Maximum length of string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

