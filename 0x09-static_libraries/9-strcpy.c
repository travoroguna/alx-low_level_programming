#include "holberton.h"

/**
 * _strcpy - copy string to destination
 * @dest: destination
 * @src: string to be copied
 * Return: pointer to the destination.
 */

char *_strcpy(char *dest, char *src)
{
	char *saved = dest;

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = 0;

	return (saved);
}
