#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - Function that prints a name
 * @name: String of name
 * @f: function pointer to string
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
