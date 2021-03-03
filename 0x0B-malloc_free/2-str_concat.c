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
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the start of the concatnated string
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len = _strlen(s1);
	int s2_len = _strlen(s2);
	char *newstr = malloc((sizeof(char) * (s1_len  + s2_len)) - 1);
	int idx;

	if(newstr == NULL)
		return (NULL);

	for (idx = 0; idx < s1_len; idx++)
		newstr[idx] = s1[idx];

	for (idx = 0; idx < s2_len; idx++)
		newstr[idx + s1_len] = s2[idx];

	newstr[s1_len + s2_len] = 0;

	return (newstr);
}
