#include <stdio.h>
/**
 * _strpbrk - locates the first occurance of an element
 * @s: string input
 * @accept: string to check
 *
 * Return: address to first occuring element or null if
 * not found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *ptr;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				return (ptr);
			}
		}
	}
	return (NULL);
}
