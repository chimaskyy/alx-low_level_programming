#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	char *ptr;
	int x, y, concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	concat = a + b + 1;
	ptr = malloc(concat * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < a; x++)
		ptr[x] = s1[x];

	for (y = 0; y < b; y++)
		ptr[x + y] = s2[y];

	ptr[x + y] = '\0';
	return (ptr);
}
