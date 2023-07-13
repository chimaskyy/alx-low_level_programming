#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Functionthat concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to newly allocated string
 * @n: First byte of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	unsigned int i, j;
	unsigned int len_concat;
	char *str_concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	if (n >= len_s2)
		n = len_s2;

	len_concat = len_s1 + n + 1;

	str_concat = malloc(len_concat * sizeof(char));

			if (str_concat == NULL)
			return (NULL);

			for (i = 0; s1[i] != '\0'; i++)
			str_concat[i] = s1[i];

			for (j = 0; j < n; j++)
			str_concat[i + j] = s2[j];

			str_concat[len_concat - 1] = '\0';

			return (str_concat);
}
