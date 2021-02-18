#include "holberton.h"


/**
 * string_toupper - uppercase repr of string
 * @str: the string
 *
 * Return: pointer to the string
 */

char *string_toupper(char *str)
{
	char *store = str;
	const char OFFSET = 'a' - 'A';

	while (*str)
	{
		*str = (*str >= 'a' && *str <= 'z') ? *str -= OFFSET : *str;
		str++;
	}

	str = store;
	return (store);
}
