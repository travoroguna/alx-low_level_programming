#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	if (!s)
		return;

	char *tail = s;

	while (*tail)
		++tail;
	--tail;

	for ( ; s < tail; ++s, --tail)
	{
		char h = *s, t = *tail;
		*s = t;
		*tail = h;
	}
}
