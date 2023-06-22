#include "main.h"

/**
 * _isalpha - To check for alphabetic characters
 * @c: Number to be inputed
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
