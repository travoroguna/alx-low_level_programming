#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - concatenates strings
 * @dest: string destination
 * @src: string source
 *
 * Return: returns pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	char *saved_src = src;
	char *saved_dest = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = 0;
	src = saved_src;
	return (saved_dest);
}
