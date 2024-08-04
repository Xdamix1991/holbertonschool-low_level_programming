#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * get_dnodeint_at_index - Retrieves the nth node of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve, starting from 0.
 *
 * Return: Pointer to the node at the specified index, or NULL if the index
 * is out of range.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
	dlistint_t *str;
	unsigned int current_index;

	current_index = 0;
	str = head;

	while (str != NULL)
	{
		if (current_index == index)
		{
			return (str);
		}
		str = str->next;
		current_index++;
	}
	return (NULL);
}
