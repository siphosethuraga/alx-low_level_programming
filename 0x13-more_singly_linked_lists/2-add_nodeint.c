#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* listint_len - returns the number of elements in a linked listint_t list
* @h: pointer to the head of the list
* count - number of elements
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
