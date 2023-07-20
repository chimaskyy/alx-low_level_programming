#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - Function that prints numbers
 * @separator: Separator for the numbers to print
 * @n: Number of parameter passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int numbers;

	va_list  args_list;

	va_start(args_list, n);

	for (i = 0; i < n; i++)
	{
		numbers = va_arg(args_list, int);

		printf("%d", numbers);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args_list);
	printf("\n");

}
