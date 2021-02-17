#include "holberton.h"


/**
 * print_rev - prints string in reverse
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	int length;
	int idx;

	for (length = 0; *(s + length) != '\0'; length++)
	{
	}

	for (idx = length - 1; idx >= 0; idx--)
	{
		_putchar(*(s + idx));
	}

	_putchar('\n');

}

