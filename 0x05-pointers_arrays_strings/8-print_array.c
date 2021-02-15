#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: array to be printed
 * @n: size of the array
 */

void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", a[idx]);

		if (idx < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
