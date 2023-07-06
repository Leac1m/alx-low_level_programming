#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - print list int.
 * @h: head.
 * Return: NUmber of Nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *head = h;
	size_t i = 0;

	while (head != NULL)
	{
		_putchar(head->n + '0');
		_putchar('\n');
		head = head->next;
		i++;
	}

	return (i);
}
