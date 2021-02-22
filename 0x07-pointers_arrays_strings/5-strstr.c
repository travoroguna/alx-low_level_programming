#include "holberton.h"

/**
 * _strstr - function that locates a substring
 * @haystack: full string
 * @needle: substring
 * Return: pointer to the start of the sub string
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	for (int i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *needle)
		{
			char *ptr = _strstr(haystack + i + 1, needle + 1);

			return ((ptr) ? ptr - 1 : NULL);
		}
	}

	return (NULL);
}

