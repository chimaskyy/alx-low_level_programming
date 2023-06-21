#include "main.h"

/**
 * _isalpha - Entry point
 * Description: 'write a function that checks for alphabetic character'
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
