#include "lists.h"
#include <stdlib.h>

/**
 * _strdup- prints an integer
 * @s: variable to be printed
 * Return: length of printed characters
 */

char *_strdup(const char *s)
{
	size_t size = _strlen(s) + 1;
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
* add_node - function that adds a new node at the beginning of a list_t list.
* @head: first node
* @str: new string
* Return: new head
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->str = _strdup(str);
	new_node->len = _strlen(str);
	*head = new_node;

	return (new_node);
}
