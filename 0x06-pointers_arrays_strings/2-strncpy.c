#include "main.h"
#include <string.h>
/**
 * _strncpy - function that copies a string.
 * @dest: array to update
 * @src: array used to update.
 * @n: number of array elements to update.
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen, i;

	srclen = strlen(src);

	for (i = 0; i < n; i++)
	{
		if (i >= srclen)
			break;
		dest[i] = src[i];
	}
	if (dest[i - 1] == '\n')
		dest[i] = '\0';
	return (dest);
}
