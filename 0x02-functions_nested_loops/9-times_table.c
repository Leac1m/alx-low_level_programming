#include "main.h"
/**
 * times_table - print a multiple 9 times_table
 *
 * Return 0
 */

void times_table(void)
{
	int num;
	int mul;

	for (mul = 0; mul <= 9; mul++)
	{
		for (num = 0; num <= 9; num++)
		{
			int x;

			x = num * mul;
			if (num == 0)
				_putchar((x) + '0');

			if (x > 9 && num != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');

				if (num != 9)
				{

				}
			}
			else
			{


			if (num != 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(x + '0');
			}

		}
		_putchar('\n');

	}
}
