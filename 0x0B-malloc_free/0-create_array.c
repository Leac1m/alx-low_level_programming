#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: number of arguments
 * @c:lists of arguments
 * Return: 0 otherwise NULL if errors occur
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	i = 0;
	if (size == 0)
	{
		return (NULL);
	}

	s = malloc((size) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = c;

	return (s);
}
