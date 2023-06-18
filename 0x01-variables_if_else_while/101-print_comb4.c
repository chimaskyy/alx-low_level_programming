#include <stdio.h>

/**
 * main - Entry point of program
 * Decription: 'differnt combination of three digits'
 * Return: Always ) (Success)
 */

int main(void)
{
	int x, y, z;

	for (x = '0'; x < '9'; x++)
	{
		for (y = x + 1; y <= '0'; y++)
		{
			for (z = y + 1; z <= '0'; z++)
			{
				if ((y != x) != z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x == '7' && y == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
