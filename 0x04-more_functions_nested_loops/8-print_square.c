#include "main.h"
/**
* print_square - unction that prints a square,
* followed by a new line
* @size: intege
*/
void print_square(int size)
{
	int r, c;

	if (size > 0)
	{
	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
