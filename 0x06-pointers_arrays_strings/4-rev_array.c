#include "holberton.h"

/**
 * swap_int - swaps integers in place
 * @num_0: first integer
 * @num_1: second integer
 */

void swap_int(int *num_0, int *num_1)
{
	int temp = *num_0;
	*num_0 = *num_1;
	*num_1 = temp;
}


/**
 * reverse_array - reverses an array in place
 * @a: the array to be reversed
 * @n: size of the array or point of swap end
 */

void reverse_array(int *a, int n)
{
	int iter = n / 2;
	int end = n - 1;
	int idx;

	for (idx = 0; idx < iter; idx++)
	{
		swap_int(&a[idx], &a[end]);
		end--;
	}
}
