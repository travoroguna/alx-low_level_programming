#include "holberton.h"

/**
 * _isdigit - checks whether parameter passed ia a digit
 * @c: test parameter
 *
 * Return: 1 if c is digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
