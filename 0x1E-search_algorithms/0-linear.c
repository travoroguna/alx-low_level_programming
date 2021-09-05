#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * linear_search - searches for value using linear_search
 * algorithim
 * @array: array to search
 * @size: size of array
 * @value: value being searched
 * Return: return flags
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		if (*(array + idx) == value)
		{
			return (idx);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", idx, *(array + idx));
		}
			
	}
	return (-1);
}
