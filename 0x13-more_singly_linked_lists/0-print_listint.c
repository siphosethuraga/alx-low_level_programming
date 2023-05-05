#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: is the pointer
* num - the number of nodes
* next - where the memry lies
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;

	}

	return (count);
}
