#include <stdio.h>
/**
 * main - prints all letters except 'e' and 'q'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
		}
		else
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
