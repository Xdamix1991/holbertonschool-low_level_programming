#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a list struct.
 * @head: A pointer to the pointer to the head of the list.
 * @n: The integer value to be added to the new node
 *
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node_end;
	dlistint_t *add_node;

	new_node_end = malloc(sizeof(dlistint_t));
	if (new_node_end == NULL)
	{
		free(new_node_end);
		return (NULL);
	}
	new_node_end->n = n;
	new_node_end->prev = *head;
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

