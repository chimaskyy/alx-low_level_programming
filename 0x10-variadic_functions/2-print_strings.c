#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * prints_strings - Function that prints strings
 * @separator: Separator for the printed strings
 * @n: Number of strings passed to the function
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;

	va_list args_list;

	va_start(args_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args_list, const char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args_list);
	printf("\n");
}
