#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: first element
 * @max: last element
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *arr;
	int idx;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (idx = 0; idx <= max; idx++)
		arr[idx] = idx;

	return (arr);
}
