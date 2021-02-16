#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - string to integer
 * @s: string to be converted
 * Return: integer representation of the string
 */

int _atoi(char *s)
{	
	if (*s == '\0')
        return (0);
 
	int res = 0;
	int sign = 1;
	int idx = 0;

	if (s[0] == '-')
	{
		sign = -1;
		idx++;
	}


	for (; s[idx] != '\0'; ++idx)
		res = res * 10 + s[idx] - '0';

	return (sign * res);
}
