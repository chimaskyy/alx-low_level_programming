#include "main.h"

/**
 * print_binary - Function that prints the binary of a number
 * @n: Number to convert
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	int moves  = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (; (temp >>= 1) > 0; moves++)
		;

	for (; moves >= 0; moves--)
	{
		if ((n >> moves) & 1)
			printf("1");
		else
			printf("0");

	}

}
