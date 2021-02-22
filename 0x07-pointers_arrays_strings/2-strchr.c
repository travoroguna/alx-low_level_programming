#include "holberton.h"


/**
 * _strchr - locate character in a string
 * @s: the string
 * @c: the character to be located
 * Return: pointer to character if character in string else NULL
 */

char *_strchr(char *s, char c)
{
	int idx;

	for (idx = 0; *(s + idx) != '\0'; idx++)
		if (*(s + idx) == c)
			return (&s[idx]);
	return (NULL);
}

