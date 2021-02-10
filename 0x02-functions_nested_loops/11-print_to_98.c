#include "holberton.h"
#include <stdio.h>


/**
 * print_to_98 - prints from n to 98
 *
 * @n: number to print from
 *
 */
void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
		for (x = n; x <= 98; x--)
		{
			printf("%d", x);
		}
	}

	else if (n < 98)
	{
		for (x = n; x >= 98; x++)
		{
			printf("%d", x);
		}
	}

	else
	{
		printf("%d", n);
	}
}


