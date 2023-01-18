#include <stddef.h>
/**
 * array_iterator - function that executes other functions.
 * @array: list of int(s).
 * @size: size of array.
 * @action: pointer to fuction
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
