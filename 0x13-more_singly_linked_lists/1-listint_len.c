#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* listint_len - returns the number of elements in a linked listint_t list.
* @h: pointer
* Return: element count
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	do {
		count++;
		h = h->next;
		} while (h != NULL);
	} while (h != NULL);
return (count);
}
