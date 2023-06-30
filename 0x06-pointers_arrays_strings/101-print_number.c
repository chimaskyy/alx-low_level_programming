#include "main.h"

/**
 * print_number - Fucton that prints an integer
 * @n: Integer input number
 * Return: No return
 */

void print_number(int n)
{
	unsigned int num;

	if (n >= 0)
	{
		num = n;
	}

	if (n < 0)
	{
		_putchar('-');
		num = -1 * n;
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');

}


