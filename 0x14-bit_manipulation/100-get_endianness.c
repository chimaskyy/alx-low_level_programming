#include "main.h"

/**
 * get_endianness - function that check endianness
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *a = (char *)&i;

	if (*a)
		return (1);
	else
		return (0);
}
