#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints that prints number of arguement
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
