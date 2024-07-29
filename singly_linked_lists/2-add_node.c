#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the pointer to the head of the list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t str_len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	str_len = strlen(str);

	new_node->len = str_len;

	new_node->str = malloc(sizeof(str));

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	strcpy(new_node->str, str);

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}


