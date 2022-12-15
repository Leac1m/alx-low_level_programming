#include "main.h"
/**
 * _isupper - check for uppecase
 * @c: integer
 * Return: 1 if True else  0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
