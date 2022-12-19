#include "main.h"
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
s++;
counter++;
}
return (counter);
}
