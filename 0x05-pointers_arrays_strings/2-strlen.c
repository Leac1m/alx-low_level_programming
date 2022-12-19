#include "main.c"
/**
 * _strlen - returns the length of a string.
 * @s: pointer for string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int counter;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		counter++;
	}
	return (counter);
}
