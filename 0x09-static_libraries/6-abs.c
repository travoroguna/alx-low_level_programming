#include "holberton.h"

/**
 * _abs - function that returns absolute value of an integer.
 *
 * @number: test integer
 *
 * Return: returns the absolute value of the number
 */

int _abs(int number)
{
	if (number < 0)
	{
		return (number * -1);
	}

	else
	{
		return (number);
	}
}
