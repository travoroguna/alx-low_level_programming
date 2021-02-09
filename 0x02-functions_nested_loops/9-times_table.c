#include "holberton.h"

/**
 * times_table - prints times table
 *
 */

void times_table(void)
{
	int number = 0;
	int f_digit = 0;
	int s_digit = 0;

	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			number = x * y;
			f_digit = number % 10;
			s_digit = number / 10;
			if (s_digit <= 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + s_digit);
			}
			_putchar('0' + f_digit);

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
