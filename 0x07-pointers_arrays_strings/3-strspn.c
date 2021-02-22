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
			return &s[idx];
	return NULL;
}


/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: actual string
 * @accept: prefix
 * Return:  number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if((s == NULL) || (accept == NULL))
		return (len);

	while(*s && _strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
