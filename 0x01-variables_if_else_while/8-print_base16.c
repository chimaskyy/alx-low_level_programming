#include <stdio.h>

/**
 * main - Entry point of program
 * Description: 'print all numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	x = 48;
	y = 97;

	while (x <= 57)
	{
		putchar(x);
		x++;
	}
	while (y <= 102)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
