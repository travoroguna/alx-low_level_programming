#include "search_algos.h"
#include <stdio.h>


/**
 *linear_search - linear search algorithm
 *@array: array to be searched
 *@size: size of the array
 *@value: value being searched
 *Return: -1 if value was not found else the position
 *of the value in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t count;

	if (array == NULL)
		return (-1);

	for (count = 0; count < size; count++)
	{
		printf("Value checked array[0] = [%d]\n", array[count]);
		if (array[count] == value)
		{
			return (count);
		}
	}
	return (-1);
}

