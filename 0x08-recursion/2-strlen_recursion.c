#include "holberton.h"

/**
 *  _strlen_recursion - find length of string using recursion
 * @s: pointer to string
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
