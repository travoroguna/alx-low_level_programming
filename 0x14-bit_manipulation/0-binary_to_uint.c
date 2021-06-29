#include <stdio.h>

/**
 * _strlen - length of string
 * void: nothing
 * @s: char pointer
 * Return: void
 **/
unsigned int _strlen(const char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}

/**
 * _power - get power
 * void: nothing
 * @base: base
 * @exponent: exponent
 * Return: result of operation
 **/
int _power(int base, int exponent)
{
	int result = 1;

	for (; exponent > 0; exponent--)
		result = result * base;

	return (result);
}

/**
 * binary_to_uint - binary to uint conversion
 * @b: binary number in char pointer
 * Return: unsigned integer
 **/
unsigned int binary_to_uint(const char *b)
{
	int len, c, pw, num = 0;
	unsigned int n;

	if (b == NULL)
		return (0);

	len =  _strlen(b);

	for (c = 0; b[c] != '\0'; c++, len--)
	{
		n = b[c] - '0';

		if ((n == 0) || (n == 1))
		{
			pw = _power(2, (len - 1));
			num = num + (n * pw);
		}
		else
			return (0);
	}
	return (num);
}
