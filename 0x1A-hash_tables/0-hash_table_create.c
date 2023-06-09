#include "hash_tables.h"
/**
 * hash_table_create - creates an array for hashlists.
 * @size: size of array.
 * Return: array else NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));
	unsigned long int i;


	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_table_t) * size);
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
