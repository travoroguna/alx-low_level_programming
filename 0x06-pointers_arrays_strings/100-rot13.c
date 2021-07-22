#include "holberton.h"

/**
 * rot13 - rot13 algorithm
* @s: this parameter is the string to encrypt
* Return: this return a char.
*/
char *rot13(char *s)
{

	char low1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char low2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int c, low_c;

	c = 0;
	while (*(s + c) != '\0')
	{
		low_c = 0;
		while (low1[low_c] != '\0')
		{
			if (*(s + c) == low1[low_c])
			{
				*(s + c) = low2[low_c];
				break;
			}
			low_c++;
		}
		c++;
	}

	return (s);
}
