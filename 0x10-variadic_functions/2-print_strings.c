#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(str, char *));
		if (i < (n + 1))
			printf("%s",separator);
	}
	printf("\n");
	va_end(str);
}
