#include "lists.h"
#include <stdlib.h>

/**
* free_list - function that frees a list_t list.
* @head: start of node
* Return: None
*/

void free_list(list_t *head)
{
	list_t *next;

	if (head == NULL)
		return;

	next = head->next;
	free(head->str);
	free_list(next);
	free(head);
}
