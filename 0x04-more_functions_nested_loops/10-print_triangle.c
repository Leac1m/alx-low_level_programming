#include "main.h"
/**
* print_triangle - prints a triangle, followed by a new line.
* @size: integer
*/
void print_triangle(int size)
{
	if (size < 1)
		_putchar('\n');
	else 
	{
		int i, j;

		for (i = 1; i < size; i++)
		{
			for (j = 1; j < size; i++)
			{
			_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putcahr('\n');
		}
	}
}

