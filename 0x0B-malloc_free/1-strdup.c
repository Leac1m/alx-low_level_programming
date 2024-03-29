#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string value
 * Return: pointer to copy, otherwise NULL.
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(strlen(str) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	strcpy(s, str);
	return (s);
}
