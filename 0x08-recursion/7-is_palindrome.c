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


/**
 * is_pal - find is a string is palindrome
 * @start: start of string
 * @end: end of string
 * @str: pointer to the string
 * Return: 1 if a string is pal 0 else
 */

int is_pal(int start, int end, char *str)
{
	if (str[start] != str[end])
		return (0);
	else if (start >= end)
		return (1);
	else
		return (is_pal(++start, --end, str));

	return (0);
}

/**
 * is_palindrome - find is a string is palindrome
 * @s: pointer to the string
 * Return: 1 if a string is pal 0 else
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);
	int start = 0;
	int end = length - 1;

	return (is_pal(start, end, s));
}
