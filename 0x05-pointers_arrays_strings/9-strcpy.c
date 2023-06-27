#include "main.h"

/**
 * *_strcpy - copy the stringe pointed at by src
 * @src: Char type of stringe
 * @dest: Char type of sring
 * Description: copy the stringe ponted to by 'src'
 * to the buffer pointed to bt dest
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	}
	while (src[i] != '\0');
		return (dest);
}
