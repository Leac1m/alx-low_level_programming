#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list.
 * @head:head of file.
 * @str: string.
 */
list_t *add_node(list_t **head, const char *str)
{
	int str_len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (*str != '\0')
		 str++, str_len++;

	new->len = str_len;

	new->next = *head;
	*head = new;

	return (new);
}
