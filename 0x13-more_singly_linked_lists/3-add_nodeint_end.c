#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @head: pointer to the head
* n_node - new node
* next - location of stored memory
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)

		return (NULL);
	n_node-> = n;
	n_node->next = *head;
	*head = n_node:

		return (n_node);
}
