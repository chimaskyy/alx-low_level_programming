#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - Print largest prime factors
 * Return: Always 0
 */

int main(void)
{
	int i;
	long maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (i = 1; i <= square; i++)
	{
		if (number % i == 0)
		{
			maxf = number / i;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
