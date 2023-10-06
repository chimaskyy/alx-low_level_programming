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
	/*At each shift, n is divided by 2, moves keep track of how many times it is divided*/
	for (; (temp >>= 1) > 0; moves++)
		;
	/*shifting starts from the highest moves[index] and decrements*/
	for (; moves >= 0; moves--)
	{
		/*n binary form is shifted the number of times moves[index]*/
		if ((n >> moves) & 1)
			printf("1");
		else
			printf("0");

	}

}
