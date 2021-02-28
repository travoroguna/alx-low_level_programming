#include "holberton.h"

/**
 * _memcpy - copies n bytes from the source to the destination
 *
 * @dest: Destination
 * @src: Source
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
		*(dest + idx) = *(src + idx);

	return (dest);

}
