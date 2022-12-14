#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * @c: an int
 * Return: result
 */
int print_last_digit(int c)
{
	if (c < 0)
		c *= -1;
	c %= 10;
	_putchar(c + '0');
	return (c);
}
