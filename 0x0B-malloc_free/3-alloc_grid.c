#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional
 * array of integers.
 * @width: columns
 * @height: rows
 * Return: pointer otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int row, col;
	int **array;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		array[row] = malloc(width * sizeof(int));
		if (array[row] == NULL)
		{
			free(array);
			return (NULL);
		}

	}
	for (row = 0; row < height; row++)
		for (col = 0; col < width; col++)
			array[row][col] = 0;
	return (array);
}
