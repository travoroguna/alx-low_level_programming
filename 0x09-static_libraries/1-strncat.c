#include "holberton.h"

/**
 * _strlen - length of string
 * @str: string
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		count++;
	}

	return (count);
}

/**
 * _strncat - concatenates string to a maximum length
 * @dest: destination of the string
 * @src: string source
 * @n: maximum string length
 *
 * Return: pointer to the destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);

}
