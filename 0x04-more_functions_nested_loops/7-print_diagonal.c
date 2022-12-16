#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: integer
*/
void print_diagonal(int n)
{
	if (n > 0)
	{
	int r, c;

	for (r = 1; r <= n; r++)
	{
		for (c = 0; c < r; c++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');

	}
	}
	else
	{
		_putchar('\n');
	}
}
