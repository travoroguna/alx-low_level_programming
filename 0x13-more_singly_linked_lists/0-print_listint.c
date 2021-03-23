#include "lists.h"
#include <stdio.h>

/**
* print_listint - function that prints all the elements of a listint_t list.
* @h: head of node
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	unsigned int count;
	const listint_t *node = h;

	if (h != NULL)
	{
		count = 1;
		printf("%d\n", h->n);
	}
	else
	{
		return (0);
	}

	while (1)
	{
		node = node->next;
		if (node != NULL)
		{
			count += 1;
			printf("%d\n", node->n);
		}
		else
			break;
	}

	return (count);
}
