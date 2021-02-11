#include "holberton.h"

/**
 * print_number - prints number
 * @number: number to be printed
 */

void print_number(long number)
{
	if (number < 0)
	{
		_putchar('-');
		number = number * -1;
	}
		print_number(number / 10);

	if (number == 0)
	{
		_putchar('0');
	}

	if (number/10)
	{	
		print_number(number / 10);
	}
:
	_putchar(number % 10 + '0');

}

void more_numbers(void)
{
	int x;
	int count = 0;


	while (count < 10)
	{
		for (x = 0; x < 15; x++)
			print_number(x);

		count++;
	}
	
}

