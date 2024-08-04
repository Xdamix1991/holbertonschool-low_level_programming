#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data in the list. If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *str;

	str = head;
	sum = 0;

	{
		while (str != NULL)
		{
			sum += str->n;
			str = str->next;
		}
		return (sum);
	}
}

