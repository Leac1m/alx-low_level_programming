#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a - array to be revised
 * @n - number of element in array.
 */
void reverse_array(int *a, int n)
{
	while (n--)
	{
		printf("%d",a[n]);
		if (0 != n)
			printf(", ");
	}
	printf("\n");
}
