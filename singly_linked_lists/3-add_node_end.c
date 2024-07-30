#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * my_strlen - Calculates the length of a string
 * @str: The string whose length is to be calculated
 *
 * Return: The length of the string
 */
size_t my_strlen(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * my_strcpy - Copies a string
 * @dest: The destination buffer to copy the string to
 * @src: The source string to be copied
 *
 * Return: A pointer to the destination string
 */
char *my_strcpy(char *dest, const char *src)
{
	size_t i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the pointer to the head of the list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_end;
	size_t str_len;
	list_t *add_node;

	new_node_end = malloc(sizeof(list_t));
	if (new_node_end == NULL)
	{
		free(new_node_end);
		return (NULL);
	}
	str_len = my_strlen(str);

	new_node_end->str = malloc(str_len + 1);

	if (new_node_end->str == NULL)
	{
		free(new_node_end);
		return (NULL);
	}
	my_strcpy(new_node_end->str, str);

	new_node_end->len = str_len;

	new_node_end->next = NULL;
	if (*head == NULL)
	{
		*head = new_node_end;
		return (new_node_end);
	}
	add_node = *head;
	while (add_node->next != NULL)
	{
		add_node = add_node->next;
	}
	add_node->next = new_node_end;

	return (new_node_end);
}

