#include "function_pointers.h"


/**
 * int_index - Function that searches for an integer.
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: int found in the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (idx = 0; idx < size; idx++)
			if (cmp(array[idx]) != 0)
				return (array[idx]);
	}

	return (-1);
}
