#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - clears bit
 * @n:bit number in poiunter char
 * @index:is the index, starting from 0 of the bit you want to get
 * Return: 1 if succed -1 otherwise
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 64)
		return (-1);

	mask = mask << index;
	*n = (~mask & *n);
	return (1);
}
