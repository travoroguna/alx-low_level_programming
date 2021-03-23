#include "lists.h"
#include <stdlib.h>

/**
* free_listint - function that frees a listint_t list.
* @head: head of node
*/

void free_listint(listint_t *head)
{
	listint_t *next;

	if (head == NULL)
		return;

	next = head->next;
	free_listint(next);
	free(head);	
}

/**
* free_listint2 - function that frees a listint_t list.
* @head: pointer to head of node
*/

void free_listint2(listint_t **head)
{
	free_listint(*head);
	(*head) = NULL;
}
