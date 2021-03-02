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

	while (*(s + idx) != '\0')
	{
		idx++;
	}

	return (idx);
}


/**
 * _strdup - duplicates a string
 * @str: string to be copied
 * Return: pointer to duplicated string else NULL
 */

char *_strdup(char *str)
{
	int str_len, idx;
	char *new_string;

	if (str == NULL)
		return (NULL);

	str_len = _strlen(str);
	new_string = malloc(sizeof(char) * str_len);

	if (new_string == NULL)
		return (NULL);

	for (idx = 0; idx < str_len; idx++)
		new_string[idx] = str[idx];

	new_string[idx] = 0;

	return (new_string);
}
