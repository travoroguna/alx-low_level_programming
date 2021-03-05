#include "holberton.h"
#include <stdlib.h>


/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: returns the length of the strin
 */

int _strlen(char *s)
{
	int idx = 0;

	if (s == NULL)
		return (0);

	while (*(s + idx) != '\0')
	{
		idx++;
	}

	return (idx);
}


/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: Second string
 * @n: bytes required
 * Return: pointer to concatnated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_len = _strlen(s1);
	unsigned int idx;

	char *new_str = (char *)malloc((unsigned int)s1_len + n + 1);
	char *saved = new_str;

	if (new_str == NULL)
		return (NULL);

	while (*s1)
		*new_str++ = *s1++;

	if (s2 != NULL)
	{
		for (idx = 0; idx < n  && *(s2 + idx) != '\0'; idx++)
			*new_str++ = *(s2 + idx);
	}

	*(new_str) = '\0';

	return (saved);
}
