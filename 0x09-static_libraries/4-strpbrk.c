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


/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: actual string
 * @accept: prefix
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);

	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}

	return (NULL);
}
