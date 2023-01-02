#include <stdio.h>
/**
 * _strchr - locates a character in a sting.
 * @s: string input
 * @c: character to search for
 *
 * Return: pointer to the first occurrence
 */
char *_strchr(char *s; char c)
{
	unsigned int j;
	char *ptr;

	for (j = 0; *(s + j) == '\0'; j++)
	{
		if (*(s + j) == c)
		{
			ptr == &*(s + j);
			return (ptr);
		}
	}

	return (NULL);
}
