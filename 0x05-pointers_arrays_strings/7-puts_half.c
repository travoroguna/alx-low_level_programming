#include "holberton.h"

/**
 * _strlen - claculates length of string
 * @str: the string
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
		count++;

	return (count);
}

/**
 * puts_half - prints half of the string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int lenght = _strlen(str);
	int n, idx;

	if (lenght % 2 == 0)
		n = lenght / 2;
	else
		n = (lenght - 1) / 2;

	for (idx = n; idx <= lenght; idx++)
		_putchar(*(str + idx));

	_putchar('\n');
}
