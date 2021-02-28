#include "holberton.h"

/**
 * _isalpha - checks if character is alpha
 *
 *  @c: integer representation of the character
 *
 * Return: 1 if is alpha 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 97 || c <= 122)
	{
		return (1);
	}

	else if (c >= 65 || c <= 90)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
