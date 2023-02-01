#include "lists.h"
/**
 * free_listint2 - free listint_t and set head to null.
 * @head: header node.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
