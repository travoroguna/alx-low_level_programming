#include "holberton.h"

/**
 * leet - 1337 c0d3 b4by
 * @str: string to be leeted
 * Return: leeted string
 */

char *leet(char *str)
{
	char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *lower = "abcdefghijklmnopqrstuvwxyz";
	char *encoding = "4___3______1__0____7______";
	int idx, idy;
	char point;

	for (idx = 0; *(str + idx) != '\0'; idx++)
	{
		point = *(str + idx);

		for (idy = 0; idy < 26; idy++)
		{
			if ((*(upper + idy) == point || *(lower + idy) == point) &&
					*(encoding + idy) != '_')
			{
				point = *(encoding + idy);
				break;
			}
		}

		*(str + idx) = point;
	}

	return (str);
}
