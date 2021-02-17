#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = _strlen(s);
	begin  = s;
	end    = s;

	for (c = 0; c < length - 1; c++)
		end++;

	for (c = 0; c < length / 2; c++)
	{
		temp   = *end;
		*end   = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}

/**
 * _strlen - calculates lenght of string
 * @pointer: string
 * Return: length of string
 */

int _strlen(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
		c++;
	return (c);
}
