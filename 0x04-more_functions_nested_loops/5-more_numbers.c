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
 * print_number - function that prints number using _putchar
 *
 * @number: number to be printed
 */

void print_number(int number)
{
	int f_digit = number % 10;
	int s_digit = number / 10;

	if (s_digit > 0)
	{
		pch('0' + s_digit);
	}

	pch('0' + f_digit);
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
