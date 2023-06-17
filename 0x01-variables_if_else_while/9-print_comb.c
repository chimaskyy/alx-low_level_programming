#include <stdio.h>

/**
 * main - ENtry point of program
 * Description: 'print all possible combinations of single-digit number
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	x = 48;

	while (x <= 57)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar('\n');
	return (0);
}

