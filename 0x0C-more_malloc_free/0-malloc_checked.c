#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: bytes to allocate
 * Return: pointer to the begining of allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *new_mem = malloc(b);

	if (new_mem == NULL)
		exit(98);

	return (new_mem);
}
