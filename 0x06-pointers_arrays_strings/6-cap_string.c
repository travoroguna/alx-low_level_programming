#include "holberton.h"
#include <stdio.h>

#define True 1
#define False 0

/**
 * cap - capitalise in place
 * @c: Character
 */

void cap(char *c)
{
	const char OFFSET = 'a' - 'A';

	if (*c >= 'a' && *c <= 'z')
	{
		*c -= OFFSET;
	}
}

/**
 * cap_string - capitalise words in a string
 * @str: string to capitalise;
 * Return: pointer to the capitalised string
 */

char *cap_string(char *str)
{
	char *separators = " \t\n,;.!?\"(){}";
	int capitalise = False;
	int idx, idy;

	for (idx = 0; *(str + idx) != '\0'; idx++)
	{
		if (capitalise == True)
		{
			cap(&str[idx]);
		}

		for (idy = 0; *(separators + idy) != '\0'; idy++)
		{
			if (*(str + idx) == *(separators + idy))
			{
				capitalise = True;
				break;
			}
			capitalise = False;
		}

		if (capitalise == True)
		{
			continue;
		}
	}

	return (str);
}
