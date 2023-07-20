#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Function that returns the sum of all
 * its parameters
 * @n: Number of parameter passed
 * Return: Sum of the parameters
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list  args_list;

	if (n == 0)
		return (0);

	va_start(args_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args_list, unsigned int);

	va_end(args_list);

	return (sum);
}
