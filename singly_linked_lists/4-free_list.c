#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function iterates through a linked list and frees
 * each node, ensuring all allocated memory is properly released.
 */

void free_list(list_t *head)
{
	list_t *node;
	list_t *next;

	node = head;

	if (head != NULL)
		while (node != NULL)
		{
			next = node->next;
			free(node);
			node = next;
		}
}
