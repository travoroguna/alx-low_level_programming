#include "lists.h"

/**
* get_nodeint_at_index - function that returns the nth node of a listint_t linked list.
* @head: head of list
* @index: required index
* Return: the node at index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;
	listint_t *node = head;

	if (index == 0)
		return (head);

	while (1)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
		count += 1;

		if (count == index)
			return (node);
	}
}
