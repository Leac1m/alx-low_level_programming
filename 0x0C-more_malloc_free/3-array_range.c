#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min:from number.
 * @max:to number.
 * Return: the pointer to the newly created array otherwise NULL.
 */
int *array_range(int min, int max)
{
	int *array;
	unsigned int i, count = ((max - min) + 1);

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(count * sizeof(*array));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
