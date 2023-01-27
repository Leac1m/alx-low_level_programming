#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - add a node at the end of a linked list
 * @head: The character to print
 * @str: string for the new node
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new;
	int len;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	for (len = 0; str[len] != '\0'; len++)
		;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = NULL;

	if (current)
		current->next = new;
	else
		*head = new;
	return (new);
}
