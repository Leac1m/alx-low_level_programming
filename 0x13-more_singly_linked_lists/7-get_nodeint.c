#include "lists.h"
/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list.
 * @head:header node.
 * @index: nth node to be retrieved.
 * Return: nth node if avalable else NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int index_check;

	while (current && current->next)
	{
		if (index == index_check)
			return (current);

		current = current->next;
		index_check++;
	}
	return (NULL);
}
