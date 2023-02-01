#include "lists.h"
/**
 * free_listint - free listint_t.
 * @head:head node.
 */
void free_listint(listint_t *head)
{
	listint_t *next;
	listint_t *current;


	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
