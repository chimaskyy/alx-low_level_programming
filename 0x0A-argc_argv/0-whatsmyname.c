#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints that prints its name
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
