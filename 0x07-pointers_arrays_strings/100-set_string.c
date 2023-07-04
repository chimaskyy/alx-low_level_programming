#include "main.h"

/**
 * set_string = Set the value of a pointer to a character
 * @s: Pointer
 * @to: Character to point to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
