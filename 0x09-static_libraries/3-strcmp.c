#include "holberton.h"

/**
 * _strcmp - compares two strings s1 and s2
 * @s1: first string
 * @s2: second string
 *
 * Return: integer comparison index
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2++)
	{
		if (*s1++ == 0)
			return (0);
	}

	return (*(unsigned char *)s1 - *(unsigned char *) --s2);
}
