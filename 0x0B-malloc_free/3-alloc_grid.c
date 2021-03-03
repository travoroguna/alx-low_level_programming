#include "holberton.h"
#include <stdlib.h>


/**
 * alloc_grid -  function that returns a
 * pointer to a 2 dimensional array of integers.
 * @width: rows
 * @height: columns
 *
 * Return: pointer to the allocated grid
 */

int **alloc_grid(int width, int height)
{
	int **new_arr;
	int idx, idy;

	if (width <= 0 || height <= 0)
		return (NULL);

	new_arr = (int **)malloc(height * sizeof(int *));

	if (new_arr == NULL)
		return (NULL);

	for (idx = 0; idx < height; idx++)
		new_arr[idx] = (int *)malloc(width * sizeof(int));

	for (idx = 0; idx < height; idx++)
		for (idy = 0; idy < width; idy++)
			new_arr[idx][idy] = 0;

	return (new_arr);
}