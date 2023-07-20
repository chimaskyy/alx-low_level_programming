#include "variadic_functions.h"
/**
 * print_all - Function that prints anything
 * @format: Types of argument passed to funtion
 */
void print_all(const char * const format, ...)
{
	int i;
	char c, *s;
	float f;
	const char *j;
	va_list args_list;

	va_start(args_list, format);
	j = format;
	while (*j)
	{
		if (*j == 'i')
		{
			i = va_arg(args_list, int);
			printf("%d, ", i);
		}
		else if (*j == 'c')
		{
			c = va_arg(args_list, int);
			printf("%c, ", c);
		}
		else if (*j == 'f')
		{
			f = va_arg(args_list, double);
			printf("%f, ", f);
		}
		else if (*j == 's')
		{
			s = va_arg(args_list, char*);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
				printf("%s", s);
		}
		j++;
	}
	va_end(args_list);
	printf("\n");
}
