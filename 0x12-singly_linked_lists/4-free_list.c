#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees a list_t list.
 * @head:head of node.
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *nxt;

	current = head;

	while (current != NULL)
	{
		nxt = current->next;
		free(current->str);
		free(current);
		current = nxt;
	}
}
