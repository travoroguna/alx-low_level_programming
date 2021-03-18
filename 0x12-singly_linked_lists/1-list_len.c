#include "lists.h"
#include <stdio.h>

/**
* list_len - function that returns
* the number of elements in a linked list_t list.
* @h: head of list
* Return: number of elements
*/

size_t list_len(const list_t *h)
{
	size_t count = 1;
	list_t *node = NULL;

	if (h == NULL)
		return (0);

	while (1)
	{
		node = h->next;
		if (node != NULL)
			count++;
		else
			break;
		h = node;
	}

	return (count);
}
