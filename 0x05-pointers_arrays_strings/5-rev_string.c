#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: returns the length of the strin
 */

int _strlen(char *s)
{
	int idx = 0;

	while (*(s + idx) != '\0')
	{
		idx++;
	}

	return (idx);
}

/**
 * _strcpy - copy string to destination
 * @dest: destination
 * @src: string to be copied
 * Return: pointer to the destination.
 */

char *_strcpy(char *dest, char *src)
{
	char *saved = dest;

	while (*src != '\0')
	{
		printf("%c\n", *src);
		*dest++ = *src++;
	}

	*dest = 0;

	return (saved);
}

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	if (!s)
		return;

	char *tail = s;

	while (*tail)
		++tail;
	--tail;

	for ( ; s < tail; ++s, --tail)
	{
		char h = *s, t = *tail;
		*s = t;
		*tail = h;
	}
}
