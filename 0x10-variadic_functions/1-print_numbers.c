#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers followed by a new line.
 * @separator: used to separate the numbers.
 * @n: number count.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	if (separator != NULL)
	{

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));

	if (i < (n - 1))
	printf("%s", separator);
	}
	printf("\n");
	}
}
