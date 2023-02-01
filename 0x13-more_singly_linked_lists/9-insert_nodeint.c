#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head node.
 * @idx: position in stack to be added.
 * @n: value of new node.
 * Return: address of new node else node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *new;
	listint_t *save;
	unsigned int index = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (current && current->next)
	{
		if (idx == (index + 1))
		{
			save = current->next;
			current->next = new;
			new->next = save;
			return (new);

		}
		current = current->next;
		index++;
	}

	return (NULL);
}
