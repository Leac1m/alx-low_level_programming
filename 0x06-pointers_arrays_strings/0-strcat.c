#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - function that concatenates two strings.
 * @dest: sting to append to.
 * @src: string to append from.
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int destlen, srclen, i;

	destlen = strlen(dest);
	srclen = strlen(src);

	for (i = 0; i < srclen; i++)
	{
		dest[i + destlen] = src[i];
	}
	return (dest);
}
