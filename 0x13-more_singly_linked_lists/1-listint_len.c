#include "lists.h"
#include <stddef.h>
/**
 * listint_len - counts number of elelments.
 * @h: head node.
 * Return: Number of node.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *head = h;
	size_t i = 0;

	while (head != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}
