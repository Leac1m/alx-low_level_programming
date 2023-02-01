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
	unsigned int idx;

	for (idx = 0; idx < index && head != NULL; idx++)
	{
		head = head->next;
	}

	return (head);
}
