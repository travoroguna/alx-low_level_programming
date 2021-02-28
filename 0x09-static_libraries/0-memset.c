#include "holberton.h"

/**
 * _memset -  function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 *
 * @s:  memory area pointed to
 * @n:  number of bytes to fill
 * @b: byte to fill mem with
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
		*(s + idx) = b;

	return (s);
}
