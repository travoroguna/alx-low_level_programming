#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - function that executes a
* function given as a parameter on each element of an array.
*
* @array: array to be ittirated
* @size: size of the array
* @action: function to execute on each element
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int idx;

	if (array != NULL && size > 0 && action != NULL)
		for (idx = 0; idx < size; idx++)
			action(array[idx]);
}
