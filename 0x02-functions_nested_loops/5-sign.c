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
 * print_sign - prints the sign of an integer
 *
 * @n: test integer
 *
 * Return: returns 1, 0, -1 depending on the int
 */

int print_sign(int n)
{
	if (n > 0)
	{
		print("+");
		return (1);
	}

	else if (n == 0)
	{
		print("0");
		return (0);
	}

	else
	{
		print("-");
		return (-1);
	}

}
