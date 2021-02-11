#include "holberton.h"


/**
 * print_line - prints '_'
 * @n: number of times to print
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n')
	}
}
