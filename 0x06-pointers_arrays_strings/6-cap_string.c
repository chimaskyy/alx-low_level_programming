#include "main.h"

/**
 * cap_string - Capitalize words of a string
 * @str: Character sting
 * Return: String
 */

char *cap_string(char *str)
{
	int a = 0;

	while (str[a])
	{
		while (!(str[a] >= 97 && str[a] <= 122))
			a++;

		if (str[a - 1] == ' ' || str[a - 1] == '\n'
				|| str[a - 1] == '\t' || str[a - 1] == ','
				|| str[a - 1] == ';' || str[a - 1] == '.'
				|| str[a - 1] == '!' || str[a - 1] == '"'
				|| str[a - 1] == '?' || str[a - 1] == '('
				|| str[a - 1] == ')' || str[a - 1] == '{'
				|| str[a - 1] == '}' || a == 0)

			str[a] -= 32;
		a++;
	}
	return (str);
}
