#include <stdio.h>

/**
 * main - A script that prints all the alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';

	while (ch <= 'Z')
        {
                putchar(ch);
                ch++;
        }
	putchar('\n');
	return (0);
}

