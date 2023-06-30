#include "main.h"

/**
 * rot13 - Function that encodes a string using rot13
 * @str: Pointer to the string to encrypt
 * Return: str
 */

char *rot13(char *str)
{
	int i;
	int j;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpharot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = alpharot[j];
				break;
			}
		}
	}

	return (str);
}
