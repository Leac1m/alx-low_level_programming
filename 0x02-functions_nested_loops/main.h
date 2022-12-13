#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - prints lowercase letters
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}

/**
 * print_alphabet_x10 - prints lowercase letters (x10)
 */
void print_alphabet_x10(void)
{
        int i;
	int j;

	for(j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
        	{
                	_putchar(i);
        	}
	}
        _putchar('\n');
        return;
}

