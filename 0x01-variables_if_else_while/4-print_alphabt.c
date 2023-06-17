#include <stdio.h>

/**
 * main - Entry point of program
 * Decription 'print alphabets in lowercase except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
int x = 97;
while (x <= 122)
{
	putchar(x);
	x++;
	if (x == 101 || x == 113)
	{
		x++;
		continue;
	}
}
putchar('\n');
return (0);
}
