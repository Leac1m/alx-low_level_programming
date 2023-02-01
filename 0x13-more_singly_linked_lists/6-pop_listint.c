#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node.
 * @head: head node.
 * Return: value of head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *hea;
	int n = 0;

	if (head)
	{
		n = current->n;
		hea = current->next;
		free(current);
		*head = hea;

		return (n);
	}
	return (0);
}
