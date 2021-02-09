#include "holberton.h"

/**
 * print - prints a char*
 *
 * @string: constant string pointer
 */

void print(const char *string)
{
	int idx = 0;

	while (string[idx] != '\0')
	{
		_putchar(string[idx]);
		idx++;
	}
}


/**
 * print_alphabet_x10 - prints the alphabet ten times.
 *
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		print("abcdefghijklmnopqrstuvwxyz\n");
		count++;
	}
}
