#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: memory size.
 * Return: pointer to new memory.
 */
void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);

	if (array == NULL)
	{
		free(array);
		exit(98);
	}

	return (array);
}
