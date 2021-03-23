#include "lists.h"
#include <stdlib.h>


/**
* add_nodeint_end - function that adds a new node at the end of a listint_t list.
* @head: head of the node
* @n: node data
* Return: pointer to new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current_node = *head;

	new_node->next = NULL;
	new_node->n = n;

	while (1)
	{
		if (current_node == NULL)
		{
			*head = new_node;
			break;
		}

		else if (current_node->next == NULL)
		{
			current_node->next = new_node;
			break;
		}
		current_node = current_node->next;
	}

	return (new_node);
}
