#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of the diagonals
 * @a: matrix to be printed
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{	
	int idx;
	int diag_0 = 0;
	int diag_1 = 0;
	int count_0 = 0;
	int count_1 = size-1;

	for (idx = 0; idx < size; idx++, count_0++, count_1--)
	{
		diag_0 += a[idx * size + count_0];
		diag_1 += a[idx * size + count_1];
	}

	printf("%d, %d\n", diag_0, diag_1);

}
