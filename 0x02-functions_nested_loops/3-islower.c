#include "holberton.h"

/**
 * _islower - cheaks if character is lowercase
 *
 *  @c: integer representation of the character
 *
 * Return: 1 if is lowercase 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
