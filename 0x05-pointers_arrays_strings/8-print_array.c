#include <stdio.h>
#include "main.h"
/**
* print_array - function that prints n elements of an
* array of integers, followed by a new line.
*@a: array
*@n: number of elements
*/
void print_array(int *a, int n)
{
int i = 0;

printf("%d", a[i]);
for (i = 1; i < n; i++)
{
printf(", %d", a[i]);
}
printf("\n");
}
