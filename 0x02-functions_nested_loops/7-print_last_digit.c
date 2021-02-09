#include "holberton.h"

/**
 * print_last_digit - prints the last digit
 *
 * @number: test number
 *
 * Return: returns the last digit of a number
 */

int print_last_digit(int number)
{
	if (number >= 0)
	{
		_putchar('0' + number % 10);
		return (number % 10);
	}

	else
	{
		_putchar('0' + (number * -1 % 10));
		return (number * -1 % 10);
	}
}
