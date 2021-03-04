#include "holberton.h"
#include <stdlib.h>


/**
 * _calloc:  function that allocates memory for an array, using malloc.
 * @nmemb: number of elements to allocate
 * @size: size of element
 * Return: pointer to the allocated array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	unsigned int idx;

	if (nmemb == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		*(arr + idx) = 0;

	return (arr);

}
