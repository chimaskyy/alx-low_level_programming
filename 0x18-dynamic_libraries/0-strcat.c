#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @dest: Destination to concatenate
 * @src: Source to concatenate
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	a++;
	return (dest);
}
