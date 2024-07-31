#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *print_dlistint -� prints numbers of elements in the tructure
 *@h: a pointer to the structure
 *Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)

{
	size_t i; /** counter */

	i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}

