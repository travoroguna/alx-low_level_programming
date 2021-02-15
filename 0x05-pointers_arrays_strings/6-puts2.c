#include "holberton.h"

/**
 * puts2 - prints every other character
 * @str: string to be printed
 */

void puts2(char *str)
{
	int idx = 0;

	for (idx = 0; *(str + idx) != '\0'; idx += 1)
	{
		if (idx % 2 == 0)
		{
			_putchar(*(str + idx));
		}

	}
	_putchar('\n');

}
