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
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of args
 * @av: character array of args
 * Return: NULL if ac == 0 or av == NULL or
 * pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *new_str;
	char *temp_str;
	int idx, idy, length, count;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;

	for (idx = 0; idx < ac; idx++)
		length += _strlen(av[idx]);

	new_str = malloc(1 + (sizeof(char) * length));

	if (new_str == NULL)
		return (NULL);

	length = 0;
	count = 0;

	for (idx = 0; idx < ac; idx++)
	{
		temp_str = av[idx];
		length = _strlen(temp_str);

		for (idy = 0; idy < length; idy++)
		{
			new_str[count] = temp_str[idy];
			count++;
		}
		new_str[count] = '\n';
		count++;
	}

	new_str[count] = '\0';
	return (new_str);
}
