#include "holberton.h"
#include <stdlib.h>


/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to initialize array
 * Return: pointer to the start of the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int idx;
	char *arr;

	if (size <= 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		arr[idx] = c;

	return (arr);

}
