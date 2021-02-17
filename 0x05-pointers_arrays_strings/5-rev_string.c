#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{

	char *tail;
	char h;
	char t;


	if (!s)
		return;

	*tail = s;

	while (*tail)
		++tail;
	--tail;

	for ( ; s < tail; ++s, --tail)
	{
		h = *s
		t = *tail;
		*s = t;
		*tail = h;
	}
}
