#include "lists.h"
#include <stdlib.h>

/**
 * _strdup- prints an integer
 * @s: variable to be printed
 * Return: length of printed characters
 */

char *_strdup(const char *s)
{
	size_t size = strlen(s) + 1;
	char *p = malloc(size);

	if (p)
		memcpy(p, s, size);
	return (p);
}

/**
 * _strlen - length of stringg
 * @str: string to get length
 * Return: length of str
 */

size_t _strlen(const char *str)
{
	int count = 0;

	while (*str)
	{
		count++;
		str++;
	}

	return (count);
}

/**
* add_node_end - function that adds a new node at the end of a list_t list.
* @head: first node
* @str: str content
* Return: address of new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current_node = *head;

	new_node->str = _strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

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
