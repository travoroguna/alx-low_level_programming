#include "lists.h"
#include <stdio.h>


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
