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
 * print_alphabet - prints the alphabet.
 *
 */

void print_alphabet(void)
{
	print("abcdefghijklmnopqrstuvwxyz\n");
}

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	print("Holberton\n");
	return (0);
}
