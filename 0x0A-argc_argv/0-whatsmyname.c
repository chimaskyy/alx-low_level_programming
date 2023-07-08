#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints that prints its name
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc, __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
