#include <stdio.h>
/**
 * main - prints all single hexedecimals
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	ch = 'a';

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
