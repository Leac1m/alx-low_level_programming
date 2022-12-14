#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: string of characters to query
 * Return: number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j]  == s[i])
				break;
		}
		if (accept[j] == '\0')
			break;
	}
	return (i);
}
