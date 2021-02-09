#include "holberton.h"


/**
 * print_number - function that prints number using _putchar
 *
 * @number: number to be printed
 */

void print_number(int number)
{
	int f_digit = number % 10;
	int s_digit = number / 10;

	_putchar('0' + s_digit);
	_putchar('0' + f_digit);
}

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 *
 */

void jack_bauer(void)
{
	for (int x = 0; x < 24; x++)
	{
		for (int y = 0; y < 60; y++)
		{
			print_number(x);
			_putchar(':');
			print_number(y);
			_putchar('\n');
		}

	}

}
