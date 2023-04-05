#include "lists.h"
#include <stdio>

/**
 * listint_len - Counts the number of nodes in a linked list.
 * @h: Head of the linked list.
 *
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}

