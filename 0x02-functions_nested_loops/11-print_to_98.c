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
	if (n > 98)
	{
		for (n; n <= 98; n--)
		{
			printf("%d", n);
		}
	}

	else if (n < 98)
	{
		for (n; n >= 98; n++)
		{
			printf("%d", n);
		}
	}

	else
	{
		return (n);
	}
}


