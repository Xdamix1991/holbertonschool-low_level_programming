#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - Frees a linked list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function iterates through a linked list and frees
 * each node, ensuring all allocated memory is properly released.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	dlistint_t *next;

	node = head;

	if (head != NULL)
		while (node != NULL)
		{
			next = node->next;
			free(node);
			node = next;
		}
}

