#include <stdio.h>
/**
 * _strstr - function that locates a substring
 * @haystack:string input
 * @needle:string to search for
 *
 * Return: pointer to first occuring element
 */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		const char *h = haystack;
		const char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return ((char *)haystack);
		}
		haystack++;
	}

	return (NULL);
}
