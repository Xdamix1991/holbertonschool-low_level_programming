#include "lists.h"

/**
 *print_list -² prints numbers of elements in the tructure
 *@h: a pointer to the structure
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)

{
	size_t i; /** counter */

	i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
