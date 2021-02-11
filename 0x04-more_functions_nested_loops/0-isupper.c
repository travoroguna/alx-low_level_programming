#include "holberton.h"

/**
 * _isupper - function that checks if character is uppercase.
 *
 * @c: character to be checked
 *
 * Return: 1 if char is uppercase 0 otherwise.
 */

int _isupper(int c)
{
	 if(c >= 'A' && c <= 'Z')
		 return (1);
	return (0);
}
