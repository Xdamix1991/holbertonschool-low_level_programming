#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at index in a dlinked list.
 * @h: Double pointer to the head of the doubly linked list.
 * @idx: The index at which to insert the new node, starting from 0.
 * @n: The data for the new node.
 *
 * Return: Pointer to the newly inserted node,
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *str;
	dlistint_t *index_node;
	unsigned int current_index;

	current_index = 0;
	index_node = malloc(sizeof(dlistint_t));
	if (index_node == NULL)
	{
		free(index_node);
		return (NULL);
	}
	index_node->n = n;
	index_node->prev = NULL;
	index_node->next = NULL;
	if (idx == 0)
	{
		index_node->next = *h;
		if (*h != NULL)
			(*h)->prev = index_node;
		*h = index_node;
		return (index_node);
	}
	str = *h;
	while (str != NULL && current_index < idx - 1)
	{
		str = str->next;
		current_index++;
	}
	if (str == NULL)
	{
		free(index_node);
		return (NULL);
	}
	index_node->next = str->next;
	index_node->prev = str;
	if (str->next != NULL)
		str->next->prev = index_node;
	str->next = index_node;
	return (index_node);
}

