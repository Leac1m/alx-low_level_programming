#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers,
 * from accending other.
 *
 * Return: Always 0
 */
int main(void)
{
	int num_1, num_2, num_3, num_4;

	for (num_1 = 0; num_1 < 7; num_1++)
	{
		for (num_2 = num_1 + 1; num_2 < 8; num_2++)
		{
			for (num_3 = num_2 + 1; num_3 < 9; num_3++)
			{
				for (num_4 = num_3 + 1; num_4 < 10; num_4++)
				{
					putchar((num_1 % 10) + '0');
					putchar((num_2 % 10) + '0');
					putchar(' ');
					putchar((num_3 % 10) + '0');
					putchar((num_4 % 10) + '0');
					if (num_1 == 6 && num_2 == 7 && num_3 == 8 && num_4 == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
