#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - function that deletes the head node of a
* listint_t linked list, and returns the head node’s data
* @head: head of the list
* Return: value of head
*/

int pop_listint(listint_t **head)
{
	int res = (*head)->n;
	listint_t *node = *head;
	listint_t *next = (*head)->next;

	(*head) = next;

	free(node);

	return (res);
}
