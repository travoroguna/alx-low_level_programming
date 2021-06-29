#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - flips bits
 * @n:bit number in poiunter char
 * @m:is the index, starting from 0 of the bit you want to get
 * Return: 1 if succed -1 otherwise
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c = 0;

	n = n ^ m;

	while (n > 0)
	{
		if (n & 1)
			c++;
		n = n >> 1;
	}
	return (c);
}
