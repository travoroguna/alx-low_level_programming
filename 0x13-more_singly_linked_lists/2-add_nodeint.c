#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
* add_nodeint - function that adds a new node at the beginning of a listint_t list.
* @*head: head of node
* @n: data for the node
* Return: new adress of the node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->n = n;
	*head = new_node;

	return (new_node);
}
