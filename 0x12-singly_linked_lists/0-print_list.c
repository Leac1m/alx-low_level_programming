#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints all elements of a list_t list.
 * @h: print to list.
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t i = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		i++;

	}
	return (i);
}
