#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - add node at the end of stack.
 * @head:head of node.
 * @n:value to input.
 * Return: adress of node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;


	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (current)
		current->next = new;
	else
		*head  = new;
	return (new);
}
