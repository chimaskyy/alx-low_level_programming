#include "variadic_functions.h"
/**
 * print_all - Function that prints anything
 * @format: Types of argument passed to funtion
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char arr_specifier[3] = "%", *str;
	va_list args_list;

	va_start(args_list, format);
	while (format != NULL && *(format + i) != '\0')
	{
		arr_specifier[1] = *(format + i);
		switch (*(format + i))
		{
			case 'c':
				printf(arr_specifier, va_arg(args_list, int));
				break;
			case 'i':
				printf(arr_specifier, va_arg(args_list, int));
				break;
			case 'f':
				printf(arr_specifier, va_arg(args_list, double));
				break;
			case 's':
				str = va_arg(args_list, char *);
				if (str == NULL)
					str = "(nil)";
				printf(arr_specifier, str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(args_list);
	printf("\n");
}
