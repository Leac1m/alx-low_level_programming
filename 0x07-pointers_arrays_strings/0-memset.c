#include <stdio.h>
/**
* _memset - fill memory with a constant byte
 * @s: array to alter
 * @b: constant to fill with
 * @n: number of bytes to be filled
 *
 * Return: array after modification
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		*(s + j) = b;
	return (s);
}
