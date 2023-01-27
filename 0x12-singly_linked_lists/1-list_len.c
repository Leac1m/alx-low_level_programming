#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints all elements of a list_t list.
 * @h: print to list.
 * Return: number of nodes.
 */
size_t list_len(const list_t *h)
{
        const list_t *ptr = h;
        size_t i = 0;

        while (ptr != NULL)
        {
                ptr = ptr->next;
                i++;

        }
        return (i);
}
