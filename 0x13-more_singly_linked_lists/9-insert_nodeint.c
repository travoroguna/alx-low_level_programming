#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - function that
* inserts a new node at a given position.
* @head: head node
* @idx: insert position
* @n: data for the node
* Return: ponter to the node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	listint_t *new_node;

	size_t count = 0;

	while (1)
	{
		if (current == NULL)
			return (NULL);

		if (count == idx)
		{
			new_node = malloc(sizeof(listint_t));
			new_node->n = n;
			new_node->next = current;
			previous->next = new_node;
			return (new_node);
		}

		count += 1;
		previous = current;
		current = current->next;
	}
}
