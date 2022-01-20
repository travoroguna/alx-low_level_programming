#include "search_algos.h"

/**
 * binary_search - binary search alogo
 * @array: array to be searched
 * @size: size of the array
 * @value: value being searched
 * Return: -1 if value was not found else
 * index of the value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle = 0;

	while (left <= right)
	{
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}

	return (-1);
}

