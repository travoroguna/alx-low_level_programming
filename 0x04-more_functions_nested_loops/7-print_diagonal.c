
#include "holberton.h"


/**
 * print_diagonal - prints '_'
 *
 * @n: number of times to print
 */

void print_diagonal(int n)
{
	int count;
	int current = 0;

	if (n > 0)
	{
		while (current < n)
		{
			for (count = 0; count < current; count++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
			current++;
		}
	}

	else
	{
		_putchar('\n');
	}
}
