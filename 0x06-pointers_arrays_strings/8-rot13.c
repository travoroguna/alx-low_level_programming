#include "holberton.h"
#define OP if

/**
 * rot13 - rot13 cypher
 * @str: string to cypher
 * Return: a pointer to the cyphered string
 */

char *rot13(char *str)
{
	int i = 0;
	char comp;

	for (i = 0; str[i] != '\0'; i++)
	{
		comp = *(str + i);

		OP(comp >= 'a' && comp < 'n')
			* (str + i) += 13;

		else if (comp >= 'n' && comp <= 'z')
			*(str + i) -= 13;

		OP(comp >= 'A' && comp < 'N')
			* (str + i) += 13;

		else if (comp >= 'N' && comp <= 'Z')
			*(str + i) -= 13;
	}

	return (str);
}
