#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - prints binary.
 * @n: int number
 **/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, copy = n;
	unsigned long int contBits = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (copy)
	{
		copy = copy >> 1;
		contBits++;
	}
	mask = mask << (contBits - 1);

	while (mask)
	{
		if (mask & n)
			putchar('1');
		else
			putchar('0');

		mask = mask >> 1;
	}
}
