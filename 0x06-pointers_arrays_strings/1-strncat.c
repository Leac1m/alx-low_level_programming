#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - function that concatenates two strings.
 * @dest: array to be append to.
 * @src: array to append with.
 * @n: amount of char to be use.
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen, srclen, i;

	destlen = strlen(dest);
	srclen = strlen(src);

	for (i = 0; i < n; i++)
	{
		if (i >= srclen)
			break;
		dest[i + destlen] = src[i];
	}
	return (dest);
}
