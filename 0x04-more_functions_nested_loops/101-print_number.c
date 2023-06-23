#include "main.h"
#include <stdio.h>

/**
 * print_number - Print an integer
 * @n: Ingeger to print
 * Return: 0
 */


void print_number(int n)
{
	unsigned int a;

		if (n < 0)
		{
			n *= -1;
			a = n;
				_putchar('-');
		}
	if (a >= 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
