#include "holberton.h"


/**
 * is_prime - checks if number is prime
 * @n: number to be cheaked
 * @i: test num
 * Return: 1 if num is prime else 0
 */

int is_prime(int n, int i)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);

	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - checks if number is prime
 * @n: number to be cheakedbe
 * Return: 1 if num is prime else 0
 */

int is_prime_number(int n)
{
	int i = 2;

	return (is_prime(n, i));
}
