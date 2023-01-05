#include <stdio.h>
/**
 * factorial - returns the factoria of a giving number
 * @n:positive number
 * Return: factoria or -1 if @n is less than o
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
