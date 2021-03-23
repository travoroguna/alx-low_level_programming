#include "lists.h"

/**
* listint_len - function that returns
* the number of elements in a linked listint_t list.
* @h: head of node
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	unsigned int count;
	const listint_t *node = h;

	if (h != NULL)
		count = 1;

	while (1)
	{
		node = node->next;
		if (node != NULL)
			count += 1;
		else
			break;
	}

	return (count);

}
