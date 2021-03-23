#include "lists.h"

/**
* sum_listint - function that returns the sum of
* all the data (n) of a listint_t linked list.
* @head: head of the node
* Return: sum of data
*/

int sum_listint(listint_t *head)
{
	long int count = 0;
	listint_t *current = head;

	while (1)
	{
		count += current->n;
		current = current->next;

		if (current == NULL)
			break;
	}
	return (count);
}
