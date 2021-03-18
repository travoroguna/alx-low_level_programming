#include "lists.h"
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


/**
 * strdup- prints an integer
 * @s: variable to be printed
 * Return: length of printed characters
 */

char *strdup(const char *s)
{
	size_t size = strlen(s) + 1;
	char *p = malloc(size);

	if (p)
		memcpy(p, s, size);
	return (p);
}

/**
 * print_int - prints an integer
 * @var: variable to be printed
 * Return: length of printed characters
 */

int print_int(long int var)
{
	long int count = 0;

	if (var < 0)
	{
		_putchar('-');
		count += 1;
		var = -var;
	}

	if (var / 10)
		count += print_int(var / 10);

	_putchar(var % 10 + '0');
	count += 1;

	return (count);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * print_str - prints a string
 * @str: string to be printed
 * @len: length of str
 * Return: None
 */

void print_str(char *str, size_t len)
{
	size_t count;
	int is_null = 0;

	if (str == NULL)
	{
		str = "nil";
		is_null = 1;
	}

	_putchar('[');
	print_int(is_null ? 0 : len);
	_putchar(']');
	_putchar(' ');


	for (count = 0; count < len; count++)
		_putchar(*(str + count));

	_putchar('\n');
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
