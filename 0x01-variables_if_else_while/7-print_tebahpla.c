#include <stdio.h>

/**
 * main - Entry point of program
 * Description: 'print the lowercase alphabets in reverse'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
