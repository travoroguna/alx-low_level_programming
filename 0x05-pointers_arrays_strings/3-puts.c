#include "holberton.h"

/**
 * _puts - prints a string
 * @str: pointer to the string
 */

void _puts(char *str)
{
	int idx = 0;

	while (*(str + idx) != '\0')
	{
		_putchar(*(str + idx));
		idx++;
	}

	_putchar('\n');
}
