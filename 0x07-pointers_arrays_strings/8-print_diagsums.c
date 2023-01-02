#include <stdio.h>
/**
 * print_diagsums - prints the sum of diagonals
 * of a square matrix of integers
 * @a: square matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum_f = 0, sum_b = 0;

	for (i = 0; i < size; i++)
	{
		sum_f += *(a + i * size + i);
		sum_b += *(a + i * size + (size  - 1 - i));
	}
	printf("%d, %d\n", sum_f, sum_b);
}
