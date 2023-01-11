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

	s = malloc(strlen(str) + 1);

	if (s == NULL || str == NULL)
	{
		return (NULL);
	}

	strcpy(s, str);
	return (s);
}
