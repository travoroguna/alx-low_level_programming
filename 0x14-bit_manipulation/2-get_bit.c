#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - get bit from num
 * @n: int number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: int, the bit you want to get
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 64)
		return (-1);

	if (n == 0)
		return (0);

	mask = mask << index;

	if (mask & n)
		return (1);
	else
		return (0);

	return (-1);
}
