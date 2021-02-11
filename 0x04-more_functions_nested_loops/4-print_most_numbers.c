#include "holberton.h"


/**
 * print_numbers - prints numbers 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
{	
	int x;

	for (x = 0; x < 10; x++)
	{
		if ( x != 2 || x != 4 )
			_putchar('0' + x);
	}
	_putchar('\n');
}
