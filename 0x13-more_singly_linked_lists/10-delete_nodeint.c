#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - function that
* deletes the node at index index of a listint_t linked list.
* @head: pointer to the head of the node
* @index: index of the node to be deleted
* Return: 1 is succes 0 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	size_t count = 0;

	while (1)
	{
		if (current == NULL)
			return (-1);

		if (count == index)
		{
			if (previous != NULL && current != NULL)
				previous->next = current->next;
			else if (current != NULL)
				*head = current->next;

			free(current);
			return (1);
		}
		count++;
		previous = current;
		current = current->next;
	}

}
