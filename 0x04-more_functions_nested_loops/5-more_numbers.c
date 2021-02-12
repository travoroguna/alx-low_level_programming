#include "holberton.h"

/**
 * pch - you are not the boss of me.
 *
 * @character: character to be printed
 */

void pch(int character)
{
	_putchar(character);
}

/**
 * print_number - prints number
 * @number: number to be printed
 */

void print_number(long number)
{
	if (number < 0)
	{
		pch('-');
		number = number * -1;
	}
		print_number(number / 10);

	if (number == 0)
	{
		pch('0');
	}

	if (number / 10)
	{
		print_number(number / 10);
	}

	pch(number % 10 + '0');

}

/**
 * more_numbers - prints more number
 */

void more_numbers(void)
{
	int x;
	int count = 0;


	while (count < 10)
	{
		for (x = 0; x < 15; x++)
			print_number(x);

		_putchar('\n');
		count++;
	}

	_putchar('\n');
}

