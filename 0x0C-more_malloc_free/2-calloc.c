#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array,
 * using malloc.
 * @nmemb: elements.
 * @size: size of each elemrnts.
 * Return: pointer to new array otherwise NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		array[i] = 0;
	}
	return (array);
}
