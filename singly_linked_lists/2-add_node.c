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
	size_t len;

	len = 0;

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
	size_t i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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
		free(new_node);
		return (NULL);
	}
	str_len = my_strlen(str);

	new_node->str = malloc(str_len + 1);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	my_strcpy(new_node->str, str);

	new_node->len = str_len;

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

