#include "main.h"

int primeNum(int n, int x);

/**
 * is_prime_number - Determine if an inter is a prime number or not
 * @n: Integer number
 * Return: 1 if number is prime, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primeNum(n, n - 1));
}

/**
 * primeNum - Determine if a number is prime or not
 * @n: Number to determine
 * @x: Iterator
 * Return: 1 if number is prime, else 0
 */

int primeNum(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (primeNum(n, x - 1));
}

