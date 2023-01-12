#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: first string.
 * @n: number of bytes of @s2 to concatenates.
 * Return: pointer otherwise NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;

	if (n > strlen(s2))
	{
		str = malloc((strlen(s1) + n) * sizeof(*str));
		if (str == NULL)
		{
			free(str);
			return (NULL);
		}
	}
	else
	{
		str = malloc((strlen(s1) + strlen(s2) - 1) * sizeof(*str));
		if (str == NULL)
		{
			free(str);
			return (NULL);
		}
	}

	for (i = 0; i < strlen(s1); i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';

	return (str);
}
