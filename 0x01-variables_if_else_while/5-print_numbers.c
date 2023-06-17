#include <stdio.h>

/**
 * main - Entry point of program
 * Description 'print single digit of base 10 starting from 0'
 * REturn: Always 0 (success)
 */

int main(void)
{
	int x;
	x = 0;

	while (x <= 9)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
