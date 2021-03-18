#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: returns the length of the strin
 */

size_t _strlen(const char *s)
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

char *_strdup(const char *str)
{
	int str_len, idx;
	char *new_string;

	if (str == NULL)
		return (NULL);

	str_len = _strlen(str);
	new_string = malloc((sizeof(char) * str_len) + 1);

	if (new_string == NULL)
		return (NULL);

	for (idx = 0; idx < str_len; idx++)
		new_string[idx] = str[idx];

	new_string[idx] = '\0';

	return (new_string);
}


/**
 * _strdup - duplicates a string
 * @str: string to be copied
 * Return: pointer to duplicated string else NULL
 */

char *strdup(const char *str)
{
	int str_len, idx;
	char *new_string;

	if (str == NULL)
		return (NULL);

	str_len = _strlen(str);
	new_string = malloc((sizeof(char) * str_len) + 1);

	if (new_string == NULL)
		return (NULL);

	for (idx = 0; idx < str_len; idx++)
		new_string[idx] = str[idx];

	new_string[idx] = '\0';

	return (new_string);
}



/**
 * print_str - prints a string
 * @str: string to be printed
 * @len: length of str
 * Return: None
 */

void print_str(char *str, size_t len)
{
	int is_null = 0;

	if (str == NULL)
	{
		str = "(nil)";
		is_null = 1;
	}

	printf("[%ld] %s\n", is_null ? 0 : len, str);
}


/**
* print_list - function that prints all the elements of a list_t list.
* @h: list to be printed
* Return: Number of Nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *next = h;

	while (1)
	{
		if (next == NULL)
			break;

		print_str(next->str, next->len);
		next = next->next;
		++count;
	}

	return (count);
}
