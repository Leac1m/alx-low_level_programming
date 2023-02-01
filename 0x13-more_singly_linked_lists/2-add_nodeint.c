#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - add node at the top of the stack.
 * @head:head node address.
 * @n:value to inptut.
 * Return: Adress of new node otherwise NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
