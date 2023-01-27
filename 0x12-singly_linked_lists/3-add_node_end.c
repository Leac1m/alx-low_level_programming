#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head:head node.
 * @str: new entry.
 * Return: new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;
	int len = 0;


	current = *head;

	while (current && current->next != NULL)
		current = current->next;
	while(str[len] != '\0')
		len++;

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
	current->next = NULL;

	if (current)
		current->next = new;
	else
		*head = new;

	return (new);
}





