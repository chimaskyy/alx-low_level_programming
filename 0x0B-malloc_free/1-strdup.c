#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated memory
 * containing a copy of the string given as parameter
 * @str: String parameter
 * Return: Null if str is NULL
 */

char *_strdup(char *str)
{
	int i = 0;
	int j;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}

	arr = malloc((i + 1) * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)

		arr[j] = str[j];

	return (arr);


}
