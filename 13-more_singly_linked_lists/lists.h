#ifndef LISTS_H
#define LISTS_H
/*
 * Structure for a singly linked list node
*/
typedef struct list_node 
{
	char *str;
	unsigned int len;
	struct list_node *next;
} list_t;

/* 
 * Function declarations 
 */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);void free_list(list_t *head);
/*
 * lists
 */
#endif
