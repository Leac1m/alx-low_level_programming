#include <stdio.h>
/**
 * _memcpy - copy memory area
 *  @dest: array to store result
 * @src: array to get input
 * @n: number of bytes to alter
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		*(dest + j) = *(src + j);
	return (dest);
}
